module register(i_clk, i_sr, i_ar, i_d, o_q, o_qn);
	parameter WIDTH = 5;
	input wire i_clk;
	input wire i_sr;
	input wire i_ar;
	input wire i_d;
	output reg [WIDTH - 1: 0] o_q;
	output reg [WIDTH - 1: 0] o_qn;
endmodule
	


