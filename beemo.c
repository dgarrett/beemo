#include <stdio.h>

#include "z80.c"

int main() {
	Z80.r.a = 5;
	printf("test: %d\n", Z80.r.a);
}

