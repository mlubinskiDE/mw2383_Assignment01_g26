#include <stdio.h>

//Write a program that prints integer multiplications in the range 0 to 10. 
//(Only the multiplication results must be printed, the top row and left column is added to clarify the task; columns do not have to be aligned)

int main(void) {
	for(int row = 1; row <= 10; row++) {
			for(int col = 1; col <= 10; col++) {
				printf("%d\t", (row * col));
			}
			printf("\n");
		}	
	return 0;
}
