#include <stdio.h>
#include <stdbool.h> // boolian: true false
#include <ctype.h>

int main() {
	
	// declaration of intial variables
	bool RPPSL = true;
	char userInput[32]; // 32 - size of array in bits

	while(RPPSL) {
		
		// ask user for input and write it onto declared userInput
		printf("Enter one of the following letters: r, p, s, l, k (or x to exit):");
		fgets(userInput, sizeof(userInput), stdin);
		
		// check if user entered more than one character (excluding newline)
		if (userInput[1] != '\n') {
			printf("Invalid input. Please enter only one character. \n");
			continue;
		}

		//ensure userInput is lowercase
		userInput[0] = tolower(userInput[0]);
		
		//rock-paper-scissors-lizzard-spock dictionary
		switch (userInput[0])
		{
		case 'r':
			printf("Scissors or Lizzard\n");
			break;

		case 'p':
			printf("Rock or Spock\n");
			break;

		case 's':
			printf("Paper or Lizzard\n");
			break;

		case 'l':
			printf("Paper or Spock\n");
			break;

		case 'k':
			printf("Rock or Scissors\n");
			break;

		case 'x':
			RPPSL = false; //exit condition
			break;

		default:
			printf("Invalid input. Please enter r, p, s, l, k or x.\n");
			break;
		};
	}
    
	return 0;

}
