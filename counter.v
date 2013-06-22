`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:23:00 06/22/2013 
// Design Name: 
// Module Name:    counter 
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
module counter #(parameter WIDTH = 8)(
	input wire inc,
	input wire [WIDTH - 1 : 0] max,
	input wire [WIDTH - 1 : 0] value_to_set,
	input wire set_value,
	output reg [WIDTH - 1 : 0] value,
	output reg overflow
    );
	 
	initial begin
		value = 0;
		overflow = 0;
	end

	always @ (posedge inc, posedge set_value)
	begin
		if (set_value)
		begin
			value <= value_to_set;
			overflow <= 0;
		end
		else // if (inc)
		begin
			if (value == max)
			begin
				value <= 0;
				overflow <= 1;
			end
			else
			begin
				value <= value + 1;
				overflow <= 0;
			end
		end
	end

endmodule
