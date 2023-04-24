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
