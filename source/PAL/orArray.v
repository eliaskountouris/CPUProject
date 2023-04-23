module orArray(A, Y);
	parameter NUM_INPUTS = 5;
	parameter SIZE = 5;
	input wire [NUM_INPUTS - 1 : 0] A;
	output wire [SIZE - 1 : 0] Y;

	genvar i;
	generate
		for (i = 0; i < SIZE; i = i + 1) begin
			orMux #(.NUM_INPUTS(NUM_INPUTS), .INIT(i)) U0 (.A(A), .Y(Y[i]));
		end
	endgenerate
endmodule
