#include <stdio.h>

int main(void) {
	int i
	for (i = 1; i <= 200; i++) {
		if (!(i % 2 == 0)) {
			printf(i);
		}
	}
	return 0;
}
