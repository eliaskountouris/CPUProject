module pla(A, Y, andSel, orSel, clk);
	parameter IN_WIDTH = 16;
	parameter OUT_WIDTH = 8;
	parameter AND_WIDTH = 32;

	input wire [IN_WIDTH - 1 : 0] A;
	input wire clk;
	input wire [2*IN_WIDTH - 1 : 0] andSel [AND_WIDTH - 1 : 0];
	input wire [AND_WIDTH - 1 : 0] orSel [OUT_WIDTH - 1 : 0];
	output wire [OUT_WIDTH - 1 : 0] Y;

	wire [2*IN_WIDTH - 1 : 0] bufOutput;
	wire [AND_WIDTH - 1 : 0] andOutput;

	inputBuffer #(.SIZE(IN_WIDTH)) U0 (A, bufOutput);

	andArray #(.NUM_INPUTS(2*IN_WIDTH), .SIZE(AND_WIDTH)) U1 
	(.A(bufOutput), .Y(andOutput), .sel(andSel), .wen(clk));

	orArray #(.NUM_INPUTS(AND_WIDTH), .SIZE(OUT_WIDTH)) U2
	(.A(andOutput), .Y(Y), .sel(orSel), .wen(clk));
endmodule
