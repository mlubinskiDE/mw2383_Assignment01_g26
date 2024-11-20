#include <stdio.h>

//Program that takes an integer and a float variable as input from a user
//Calculates multiplication of the two inputs and saves it to a variable.
//Print out the variable’s value.

int main(){
	int integer;
	float flo;

	printf("Enter interger variable here: ");
	scanf("%d", &integer);
	printf("Enter float variable here: ");
	scanf("%f", &flo);

	float multiplication;
	multiplication = integer * flo;
	printf("Value of multiplication: %f", multiplication);
    
	return 0;
}