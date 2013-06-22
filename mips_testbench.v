module mips_testbench();

   reg clk;
   reg rst;
	reg uart_in;
   
   cpu_perefery dat_cpu ( .clk(clk), .rst(rst), .uart_in(uart_in) );

   initial begin
      clk = 0;
      forever
        #10 clk = ~clk;              
   end


   initial begin
      rst = 1;
      
      repeat (4)
        @(posedge clk);

      rst = 0;

      repeat (200000)				
			@(posedge clk);
				
					

      $stop();
      
   end

   initial begin
      forever
        begin
           @(posedge clk);
           $display("$int0 = %b",dat_cpu.int0);
			  $display("$PC = %x",dat_cpu.cpu.datapath_inst.pc_reg);
			  $display("$leds = %x",dat_cpu.myuart.leds);
			  
        end
   end
	
	initial begin
		$display("$uart_in = %b",dat_cpu.myuart.uart_in);
      uart_in = 1;
		$display("$uart_in = %b",dat_cpu.myuart.uart_in); 
		#500 uart_in = 0;
		$display("$uart_in = %b",dat_cpu.myuart.uart_in);
		#200 uart_in =1;
		$display("$uart_in = %b",dat_cpu.myuart.uart_in);
		#200 uart_in =0;
		$display("$uart_in = %b",dat_cpu.myuart.uart_in);
		#200 uart_in =1;
		$display("$uart_in = %b",dat_cpu.myuart.uart_in);
		#200 uart_in =0;
		$display("$uart_in = %b",dat_cpu.myuart.uart_in);
		#200 uart_in =1;
		$display("$uart_in = %b",dat_cpu.myuart.uart_in);
		#200 uart_in =0;
		$display("$uart_in = %b",dat_cpu.myuart.uart_in);
		#200 uart_in =1;
		$display("$uart_in = %b",dat_cpu.myuart.uart_in);
		#200 uart_in =0;
		$display("$uart_in = %b",dat_cpu.myuart.uart_in);
		#200 uart_in =1;
		
   end
   

endmodule
