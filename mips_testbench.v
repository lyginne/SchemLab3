module mips_testbench();

   reg clk;
   reg rst;
	reg int0;
	reg uart_in;
   
   mips_cpu dut ( .clk(clk), .rst(rst), .int0(int0) );
	uart uart(.uart_in(uart_in));

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

      repeat (10000)				
			@(posedge clk);
				
					

      $stop();
      
   end

   initial begin
      forever
        begin
           @(posedge clk);
			  ;;
           //$display("$t0 (REG8) = %x",dut.datapath_inst.regfile_inst.rf[8]);
        end
   end
	
	initial begin
		$display("$uart_in = %b",uart.uart_in);
      uart_in = 1;
		$display("$uart_in = %b",uart.uart_in); 
		#500 uart_in = 0;
		$display("$uart_in = %b",uart.uart_in);
		#10 uart_in =1;
		$display("$uart_in = %b",uart.uart_in);
		#10 uart_in =0;
		$display("$uart_in = %b",uart.uart_in);
		#10 uart_in =1;
		$display("$uart_in = %b",uart.uart_in);
		#10 uart_in =0;
		$display("$uart_in = %b",uart.uart_in);
		#10 uart_in =1;
		$display("$uart_in = %b",uart.uart_in);
		#10 uart_in =0;
		$display("$uart_in = %b",uart.uart_in);
		#10 uart_in =1;
		$display("$uart_in = %b",uart.uart_in);
		#10 uart_in =0;
		$display("$uart_in = %b",uart.uart_in);
		#10 uart_in =1;
		$display("$uart_in = %b",uart.uart_in);
		
   end
   

endmodule
