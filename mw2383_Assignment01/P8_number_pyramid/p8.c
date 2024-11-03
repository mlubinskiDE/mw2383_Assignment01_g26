#include <stdio.h>

int main(){  

	// TODO: Center the middle number so that it looks like a pyramid.

	char *pyramidStr[] = {" ", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
	int userInput = 9;

	int loopTracker= userInput;
	int i;
	int j;
	int k;

	for (i = 0; i < userInput; i++) { // row itterator
		k = 0;
		for (j = 1; j < (loopTracker*2); j++) { // array itterator
			if (j > loopTracker) {
				k--;
			}
			else {
				k++;
			}
			printf("%s", pyramidStr[k]);
		}
		printf("\n");
		loopTracker--;
	}




	return 0;
	
} 

