`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:28:20 06/20/2013 
// Design Name: 
// Module Name:    cpu_perefery 
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
module cpu_perefery(
	input wire clk,
   input wire rst,
	input wire [7:0] uart_in
    );
	 
		 wire int0;
		 wire cpu_end_read;
		 wire [7:0] uart_to_cpu;
		 wire [7:0] leds_array;
		 wire write_leds;

	uart myuart(		 
		 .uart_in (uart_in),
		 .read_int    (int0),
		 .cpu_end_read (cpu_end_read),
		 .uart_to_cpu_but (uart_to_cpu),
		 .leds_array (leds_array),
		 .write_leds (write_leds)
	);
	 
	  mips_cpu cpu(
		 .clk						(clk),
		 .rst						(rst),
		 .int0					(int0),
		 .leds_write 			(write_leds),
		 .uart_read_byte 		(uart_to_cpu),
		 .leds_write_byte 	(leds_array),
		 .uart_read_end 		(cpu_end_read)
    );


endmodule
