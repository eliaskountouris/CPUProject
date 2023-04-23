module orArray(A, Y, sel, wen);
	parameter NUM_INPUTS = 5;
	parameter SIZE = 5;
	input wire [NUM_INPUTS - 1 : 0] A;
	input wire [NUM_INPUTS - 1 : 0] sel [SIZE - 1 : 0];
	input wire wen;
	output wire [SIZE - 1 : 0] Y;

	genvar i;
	generate
		for (i = 0; i < SIZE; i = i + 1) begin
			orMux #(.NUM_INPUTS(NUM_INPUTS), .INIT(i)) U0 (.A(A), .Y(Y[i]), .sel(sel[i]), .wen(wen));
		end
	endgenerate
endmodule
