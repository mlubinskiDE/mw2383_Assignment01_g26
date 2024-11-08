#include <stdio.h>
#include <stdbool.h>
#include<ctype.h>

int main(){  

	
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
	
	
	
	int totalSum = 0;
	int loopTracker = userInputValue;
	for (int i = 0; i < userInputValue; i++) { // row itterator
		
		for (int h = 0; h < userInputValue - loopTracker; h++) { // whitespace
			printf(" ");
		}

		int k = 0;
		for (int j = 1; j < (loopTracker*2); j++) { // array walk
			if (j > loopTracker) {
				k--;
			}
			else {
				k++;
			}
			printf("%d", k);
			totalSum = totalSum + k;
		}
		printf("\n");
		loopTracker--;
		
	}

	printf("\nThe summation of all printed numbers is: %d", totalSum);

	return 0;
	
} 

