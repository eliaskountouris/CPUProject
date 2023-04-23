module andMux(A, Y, sel, wen);
	parameter NUM_INPUTS = 5;
	parameter INIT = 3;
	reg [NUM_INPUTS - 1 : 0] init = INIT;
	reg [NUM_INPUTS - 1: 0] K;
	
	input wire [NUM_INPUTS - 1 : 0] A;
	input wire [NUM_INPUTS - 1 : 0] sel;
	input wire wen;
	output wire Y;

	always @* begin
		init = wen ? sel : init;
	end

	genvar i;
	generate
		for (i = 0; i < NUM_INPUTS; i = i + 1) begin
			always @* begin
				K[i] = init[i] ? A[i] : 1'b1;
			end
		end
	endgenerate

	assign Y = &K;
endmodule
