`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:27:58 06/22/2013 
// Design Name: 
// Module Name:    dc_trigger 
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
module dc_trigger(
	input d,
	input c,
	output reg q
    );
	 
	 initial
	 begin
		q = 0;
	end

	always @ (d)
	begin
		if (c)
			q = d;
	end

endmodule
