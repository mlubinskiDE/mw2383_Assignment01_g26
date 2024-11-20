#include <stdio.h>
#include <stdbool.h>

//Program that takes an integer input in the range of [5, 10] from the user. 
//Implement a separate function for input validity checking
//if the integer is out of the range, the user needs to re-enter. 
//If the input is in the range, the program prints out all the numbers in the range [100, 300] that can be divided by the input and exits.

int userInput;

int check_validity(userInput){
	bool correctUserInput = false;

	while (correctUserInput == false) {
		if (userInput > 4 && userInput < 11) {
			correctUserInput = true;
		}
		else {
			printf("Invalid input. Please enter a number between 5 and 10: ");
			scanf("%d", &userInput);
		}
	}
    
}

int main(void){
	printf("Please enter a number between 5 and 10: ");
	scanf("%d", &userInput);

	check_validity(userInput);

	for (int i = 100; i <= 300; i++) {
		if (i % userInput == 0) {
			printf("%d\n", i);
		}
	}
}


