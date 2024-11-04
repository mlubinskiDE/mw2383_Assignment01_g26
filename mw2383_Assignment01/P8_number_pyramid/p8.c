#include <stdio.h>
#include <stdbool.h>
#include<ctype.h>

int main(){  

	
	char *pyramidStr[] = {" ", "1", "2", "3", "4", "5", "6", "7", "8", "9"}; // I now realize how unneccesarily complex my solution is. I could have just printed the value of a all encomasing int variable rather than doing this non-scaleable array walk
	char userInput[32];
	int userInputValue;
	bool correctUserInput = false;

	printf("Please enter a number between 3 and 9: ");
	fgets(userInput, sizeof(userInput), stdin);
	sscanf(userInput, " %d", &userInputValue);

	// input validator
	while (correctUserInput == false) {
		if (userInputValue > 2 && userInputValue < 10) {
			correctUserInput = true;
		}
		else {
			printf("Invalid input. Please enter a number between 3 and 9: ");
			fgets(userInput, sizeof(userInput), stdin);
			sscanf(userInput, " %d", &userInputValue);
		}
	}
	
	
	
	
	int loopTracker = userInputValue;
	for (int i = 0; i < userInputValue; i++) { // row itterator
		
		for (int h = 0; h < userInputValue - loopTracker; h++) { // whitespace
			printf("%s", pyramidStr[0]);
		}

		int k = 0;
		for (int j = 1; j < (loopTracker*2); j++) { // array walk
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

