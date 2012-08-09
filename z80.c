struct {
	// Time clock: The Z80 holds two types of clock (m and t)
	struct {
		int m, t;
	} clock;

	struct {
		int a, b, c, d, e, h, l, f; // 8-bit
		int sp, pc, i, r; // 16-bit
		int m, t; // clock for last instruction
	} r;
} Z80;


