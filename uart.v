`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:04:12 06/14/2013 
// Design Name: 
// Module Name:    uart 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module uart(
		input wire uart_in,
		output reg[7:0] uart_to_cpu_buf,
		output reg read_int,
		input wire cpu_end_read,
		input wire [7:0] leds_array,
		input wire write_leds,
		input wire clk,
		output wire [7:0] leds_output
	);
	 
	localparam // UART States
		STAND_BY = 0,
		START_BIT_CHECK = 1,
		READING = 2,
		STOP_BIT_CHECK = 3;

	localparam CLK_DIV_NUMBER = 8'd10;
	
	localparam SINGLE_FRAME_LENGTH = 8;

	reg [1:0] state;
	reg [7:0] shift_read;
	reg [7:0] bit_counter;

	reg [7:0] leds;
	assign leds_output = leds;
	
	wire [7:0] clk_divider_current_value;
	reg [7:0] clk_divider_value_to_set;
	reg set_clk_divider_value;
	wire clk_divider_overflow;

	counter #(.WIDTH(8)) clk_divider (
		.inc(clk),
		.max(CLK_DIV_NUMBER - 8'b1),
		.value_to_set(clk_divider_value_to_set),
		.value(clk_divider_current_value),
		.set_value(set_clk_divider_value),
		.overflow(clk_divider_overflow)
	);
	 
	initial
	begin
		uart_to_cpu_buf = 8'b0;
		read_int = 0;
		state = STAND_BY;
		bit_counter = 8'b0;
		shift_read = 8'b0;
		leds = 8'b0;
		set_clk_divider_value = 0;
		clk_divider_value_to_set = 8'b0;
	end
		 
	always @(posedge clk)
	begin
		if (state == STAND_BY)
		begin
			if (!uart_in)
			begin
				state = START_BIT_CHECK;
				clk_divider_value_to_set = CLK_DIV_NUMBER / 2;
				set_clk_divider_value = 1;
			end
		end
		else
			set_clk_divider_value = 0;
		
		if (clk_divider_overflow)
		begin
			if (state == START_BIT_CHECK)
			begin
				if (!uart_in)
				begin
					state = READING;
					bit_counter = 0;
				end
				else
					state = STAND_BY;
			end
			else if (state == READING)
			begin
				shift_read = shift_read >> 1;
				shift_read[7] = uart_in;
				if (bit_counter == SINGLE_FRAME_LENGTH - 1)
				begin
					state = STOP_BIT_CHECK;
				end
				else
					bit_counter = bit_counter + 1;
			end
			else if (state == STOP_BIT_CHECK)
			begin
				if (uart_in == 1)
				begin
					uart_to_cpu_buf = shift_read;
					read_int = 1;
				end
				state = STAND_BY;
				end
			end
		else
		begin
			read_int = 0;
		end
	end

	/*always @(posedge cpu_end_read)
	begin
		if (has_byte_to_read) // copy another byte if has one
		begin	
			uart_to_cpu_buf = shift_read;
			has_byte_to_read = 0;
			read_int = 1;
			#10 read_int = 0;
		end
	end*/
	 
	always @(posedge write_leds)
	begin
		leds = leds_array;
	end

endmodule
