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
		 input wire write_leds
    );
	 
	 reg is_reading, has_byte_to_read;
	 
	 reg [7:0] shift_read;
	 
	 reg [7:0] leds;
	 
	 initial
	 begin
		is_reading = 0;
	 end
	 
	 always @(negedge uart_in)
	 begin
		  //if (!is_reading) // then it's a start bit
		  //begin
			  #5 if (uart_in == 0) // check if still 0 after half-interval
			  begin
					is_reading = 1;
					
					repeat (8) // read 8 bits
					 begin
						 #10 shift_read[7] = uart_in;
						 shift_read = shift_read >> 1;
					 end
					
					#10 if (uart_in == 1) // check stop bit
					begin 
						if (!is_reading) // if not waiting for cp to read
						begin // then copy shift reg to buffer and set flag for cpu
							 uart_to_cpu_buf = shift_read;
							 has_byte_to_read = 0;
							 read_int = 1;
							 #10 read_int = 0;
						end
						else // otherwise set flag to copy recieved byte after read
							has_byte_to_read = 1;
					end
					
					is_reading = 0;
			  end
		  //end
	 end
	 
	 always @(posedge cpu_end_read)
	 begin
		  if (has_byte_to_read) // copy another byte if has one
		  begin	
				uart_to_cpu_buf = shift_read;
				has_byte_to_read = 0;
				read_int = 1;
				#10 read_int = 0;
		  end
	 end
	 
	 always @(posedge write_leds)
	 begin
		  leds = leds_array;
	 end

endmodule
