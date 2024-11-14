#include <stdio.h>

//Write a program that prints integer multiplications in the range 0 to 10. 
//(Only the multiplication results must be printed, the top row and left column is added to clarify the task; columns do not have to be aligned)
//	 x ->
// y
// |

int main(void) {
	for(int y = 1; y <= 10; y++) {
			for(int x = 1; x <= 10; x++) {
				printf("%d\t", (y * x));
			}
			printf("\n");
		}	
	return 0;
}
