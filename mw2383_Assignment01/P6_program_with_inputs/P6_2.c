#include <stdio.h>

//Program that takes an integer input from a user for 3 times. 
//For each time, the program prints “The number is greater than 6” if value greater 6; or prints “The number is less than 6” if number less 6; 
//otherwise, it prints “The number is 6” if the input integer is 6 program must exit. 
//For example, if the first input is “6”, the system will skip the following input and exit

int main(void){
	int track = 0;
	int userInput;

    while(track != 3) {
		printf("Please enter a number here: ");
		scanf("%d", &userInput);

		if(userInput > 6) {
			printf("The number is greater than 6.\n");
			}
		else if(userInput < 6){
				printf("The number is smaller than 6.\n");
			}
		else{
			printf("The number is 6."); //implement exit condition
			return 0;
			}
		track++;
	}
}

