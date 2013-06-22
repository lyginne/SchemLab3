`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:03:32 06/22/2013 
// Design Name: 
// Module Name:    rs_edge 
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
module rs_edge(
	input wire r,
	input wire s,
	output reg q
    );
	 
	initial
	begin
		q = 0;
	end
	
	wire q_c

	dc_trigger master_set (
		.c(s),
		.d(1),
		.q(
	);

	dc_trigger slave (
		.c(),
		.d(),
		.q(q)
	);

	always @ (r or s)
	begin
		if (s)
			q = 1;
		if (r)
			q = 0;
	end

endmodule
