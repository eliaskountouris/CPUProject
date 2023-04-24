module alu (A, B, opcode, Y, Z);
	parameter WIDTH = 4;
	parameter CODE = 2;

	input wire [WIDTH - 1 : 0] A;
	input wire [WIDTH - 1 : 0] B;
	input wire [CODE - 1 : 0] opcode;
	output reg [WIDTH - 1 : 0] Y;
	output reg Z;

	always @* begin
		casez(opcode)
			2'b00: Z = A + B; // ADD
			2'b01: Y = (A == B) ? 1 : 0; // EQ
			2'b10: Z = (A > B) ? 1 : 0; // GT
			2'b11: Z = (A < B) ? 1 : 0; // LT
		default: Y = B;		// MOV
		endcase
	end
endmodule
