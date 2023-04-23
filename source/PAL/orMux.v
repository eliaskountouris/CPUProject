module orMux(A, Y);
	parameter NUM_INPUTS = 5;
	parameter INIT = 3;
	reg [NUM_INPUTS - 1 : 0] init = INIT;
	
	input wire [NUM_INPUTS - 1 : 0] A;
	output wire Y;
	reg [NUM_INPUTS - 1: 0] K;

	genvar i;
	generate
		for (i = 0; i < NUM_INPUTS; i = i + 1) begin
			always @* begin
				K[i] = init[i] ? A[i] : 1'b0;
			end
		end
	endgenerate

	assign Y = |K;
endmodule
