module mips_cpu
  (
   input wire clk,
   input wire rst,
	input wire int0,
	output wire uart_read_end,
	output wire leds_write,
	input wire [7:0] uart_read_byte,
	output wire [7:0] leds_write_byte
   );

   wire [1:0] alu_op,
	    alu_src_b,
	    wreg_dst,
	    wreg_data_sel;
		 
	wire [2:0] pc_source;
										  
   wire     mem_read,
	    mem_write,
	    i_or_d,
	    reg_write,
	    ir_write,
	    pc_write,
	    pc_write_cond,
	    alu_src_a,
	    imm_com,
		 int_save_pc;

   wire [5:0] opcode;
	
	wire load_uart;
	
	wire [31:0] alu_out;

   control_unit ctrl_inst  (
			    .clk          (clk),
			    .rst          (rst),
			    .alu_op       (alu_op),
			    .alu_src_b    (alu_src_b),
			    .pc_source    (pc_source),
			    .wreg_dst     (wreg_dst),
			    .wreg_data_sel(wreg_data_sel),
			    .mem_read     (mem_read),
			    .mem_write    (mem_write),
			    .i_or_d       (i_or_d),
			    .reg_write    (reg_write),
			    .ir_write     (ir_write),
			    .pc_write     (pc_write),
			    .pc_write_cond(pc_write_cond),
			    .alu_src_a    (alu_src_a),
			    .imm_com      (imm_com),
			    .opcode       (opcode),
				 .int_sig		(int0),
				 .int_save_pc  (int_save_pc),
				 .uart_read_end (uart_read_end),
				 .leds_write (leds_write),
				 .load_uart (load_uart),
				 .alu_out (alu_out)
			    );
   

   datapath datapath_inst (
			   .clk    (clk),	       
			   .rst    (rst ),	       
			   .alu_op (alu_op ),	       
			   .alu_src_b(alu_src_b),	  
			   .pc_source(pc_source),	  
			   .wreg_dst(wreg_dst),	  
			   .wreg_data_sel(wreg_data_sel),				  
			   .mem_read(mem_read),	  
			   .mem_write(mem_write),	  
			   .i_or_d(i_or_d),	       
			   .reg_write(reg_write),	  
			   .ir_write(ir_write),	  
			   .pc_write(pc_write),	  
			   .pc_write_cond(pc_write_cond), 
			   .alu_src_a(alu_src_a),	  
			   .imm_com(imm_com),	  
			   .opcode(opcode),
				.int_save_pc(int_save_pc),
				.load_uart (load_uart),
				.alu_out_value (alu_out),
				.uart_read_byte (uart_read_byte),
				.leds_write_byte (leds_write_byte)
			   );
   

endmodule
