`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:14:21 06/22/2013 
// Design Name: 
// Module Name:    interrupt_handler 
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
module interrupt_handler(
		input wire int_sig,
		input wire int_handled,
		output reg int_request
	);
	
	localparam
		WAITING_FOR_POSEDGE = 0,
		WAITING_FOR_NEGEDGE = 1;

	reg state;
	
	initial
	begin
		state = WAITING_FOR_POSEDGE;
		int_request = 0;
	end

	always @ (int_sig, int_handled)
	begin
		if (int_handled)
			int_request = 0;
		else
		begin
			if (int_sig && state == WAITING_FOR_POSEDGE)
			begin
				state = WAITING_FOR_NEGEDGE;
				int_request = 1;
			end
			else if (!int_sig && state == WAITING_FOR_NEGEDGE)
			begin
				state = WAITING_FOR_POSEDGE;
			end
		end
	end

endmodule
