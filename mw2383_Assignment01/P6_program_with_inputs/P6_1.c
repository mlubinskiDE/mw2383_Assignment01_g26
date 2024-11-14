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
	scanf("%d", &flo);

	float multiplication; //makes sense in my head but output doesn't
	multiplication = integer * flo; //is there some type conversion afoot?
	printf("Value of multiplication: %g", multiplication);
    
	return 0;
}
