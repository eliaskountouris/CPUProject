module inputBuffer(A, Y);
	parameter SIZE = 5;
	input wire [SIZE - 1 : 0] A;
	output reg [2*SIZE - 1 : 0] Y;

	genvar i;
	generate
		for (i = 0; i < 2*SIZE; i = i + 2) begin
			always @* begin
				Y[i] = A[i/2];
				Y[i+1] = ~A[i/2];
			end
		end
	endgenerate
endmodule

module andMux(A, Y);
	parameter NUM_INPUTS = 5;
	parameter INIT = NUM_INPUTS'b3;
	
	input wire [NUM_INPUTS - 1 : 0] A;
	output wire Y;
	wire [NUM_INPUTS - 1: 0] K;

	genvar i;
	generate
		for (i = 0; i < NUM_INPUTS; i = i + 1) begin
			always @* begin
				K[i] = INIT[i] ? A[i] : 1'b1;
			end
		end
	endgenerate

	assign Y = &K;
endmodule

module andArray(A, Y);
	parameter SIZE = 5;
	input wire [SIZE - 1 : 0] A;
	output reg [2*SIZE - 1 : 0] Y;

	genvar i;
	generate
		for (i = 0; i < 2*SIZE; i = i + 2) begin
			always @* begin
				Y[i] = A[i/2];
				Y[i+1] = ~A[i/2];
			end
		end
	endgenerate
endmodule
