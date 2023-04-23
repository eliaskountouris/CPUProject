module top(btns_4bits_tri_i, leds_4bits_tri_o);
	input wire [1:0] btns_4bits_tri_i;
	output wire [3:0] leds_4bits_tri_o;
	//inputBuffer #(.SIZE(2)) U0 (btns_4bits_tri_i, leds_4bits_tri_o);
	andMux #(.NUM_INPUTS(4), .INIT(6)) U1 (btns_4bits_tri_i, leds_4bits_tri_o[0]);
endmodule
