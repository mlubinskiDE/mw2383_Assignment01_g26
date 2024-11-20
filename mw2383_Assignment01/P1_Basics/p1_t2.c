#include <stdio.h>

//Write a program that calculates and prints common integer multiples of 4, 5, and 7 between 0 and 1000, e.g., 140 would be such a number.

int main(void) {
	int i;
	for(i = 0; i<= 1000; i++) {
		if(i % 4 == 0 && i % 5 == 0 && i % 7 == 0) {
			printf("%d\n", i);
		}
	}
	return 0;
}