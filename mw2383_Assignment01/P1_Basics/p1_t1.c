#include <stdio.h>

//Write a program that calculates and prints odd numbers between 0 and 200 to the terminal.

int main(void) {
	int i;
	for (i = 1; i <= 200; i++) {
		if (!(i % 2 == 0)) {
			printf("%d\n", i);
		}
	}
	return 0;
}