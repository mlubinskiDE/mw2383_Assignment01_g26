#include <stdio.h>

//Write a program that prints a table for multiplication of integers in the range of 0 to 10 with 6.

int main(void) {
	int i;
	for(i = 0; i <= 10; i++) {
		printf("%d * %d = %d\n", i, 6, (i * 6));
	}

	return 0;
}
