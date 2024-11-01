#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
	
	// declaration of intial variables
	bool RPPSL = true;
	char userInput;

	while(RPPSL == true) {
		
		//ask user for input and write it onto declared userInput
		//TODO: sanitize input to one character, avoid double printf, notify user of invalid input
		printf("Enter the one of the following letters: r, p, s, l, k (or x to exit):");
		scanf("%c", &userInput);
		
		//ensure userInput is lowercase
		userInput = tolower(userInput);
		
		//rock-paper-scissors-lizzard-spock dictionary
		switch (userInput)
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

		default:
				break;
		};
		
		//exit condition
		if (userInput == 'x') {
			RPPSL = false;
		}

	}
    
	return 0;

}
