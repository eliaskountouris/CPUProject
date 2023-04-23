module top(btns_4bits_tri_i, leds_4bits_tri_o);
	input wire [3:0] btns_4bits_tri_i;
	output wire [3:0] leds_4bits_tri_o;
	//inputBuffer #(.SIZE(2)) U0 (btns_4bits_tri_i, leds_4bits_tri_o);
	//andMux #(.NUM_INPUTS(4), .INIT(6)) U1 (btns_4bits_tri_i, leds_4bits_tri_o[0]);
	//andArray #(.NUM_INPUTS(4), .SIZE(4)) U2 (btns_4bits_tri_i, leds_4bits_tri_o);
	reg [2:0] sel [3:0];
	initial begin
		sel[0] = 1;
		sel[1] = 2;
		sel[2] = 3;
		sel[3] = 4;
	end
	orArray #(.NUM_INPUTS(3), .SIZE(4)) U3 (btns_4bits_tri_i[2:0], leds_4bits_tri_o, sel, btns_4bits_tri_i[3]);
endmodule
