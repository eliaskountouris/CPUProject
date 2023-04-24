module pla_testbench(btns_4bits_tri_i, leds_4bits_tri_o, clk);
	input wire [3:0] btns_4bits_tri_i;
	output wire [3:0] leds_4bits_tri_o;
	input wire clk;

	reg [7:0] andSel [3:0];
	initial begin
		andSel[0] = 1;
		andSel[1] = 2;
		andSel[2] = 3;
		andSel[3] = 4;
	end

	reg [3:0] orSel [3:0];
	initial begin
		orSel[0] = 1;
		orSel[1] = 2;
		orSel[2] = 3;
		orSel[3] = 4;
	end

	pla #(.IN_WIDTH(4), .OUT_WIDTH(4), .AND_WIDTH(4)) U0 (btns_4bits_tri_i, leds_4bits_tri_o, andSel, orSel, clk);
endmodule
