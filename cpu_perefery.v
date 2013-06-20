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
	output wire uart_read_end,
	output wire leds_write,
	input wire [7:0] uart_read_byte,
	output wire [7:0] leds_write_byte,
	input wire uart_in
    );
	 
		 wire read_int;
		 wire cpu_end_read;

	uart myuart(		 
		 .uart_in (uart_in),
		 .read_int    (int0),
		 .cpu_end_read (cpu_end_read)
		 //MOAAR
	);
	 
	  mips_cpu cpu(
		 .clk						(clk),
		 .int0					(int0),
		 .uart_read_end 		(uart_read_end),
		 .leds_write 			(leds_write),
		 .uart_read_byte 		(uart_read_byte),
		 .leds_write_byte 	(leds_write_byte),
		 //.cpu_end_read 		(cpu_end_read)
		 //MOAR
    );


endmodule
