#include <stdio.h>
int main(void) {
	int n, original, reversed = 0, remainder;
        int input_status;
	
	 // Prompt the user to enter a number
	printf("Enter integer value: ");
	input_status = scanf("%d", &n);
	
	if (input_status != 1) { // Check if input was not an integer
     printf("Invalid input. Please enter an integer value.\n");
     return 1; // Exit with an error code
}
	// Store the original number to compare later
	original = n;
	
	// Reverse the number using a while loop
    while (n != 0) {
        remainder = n % 10;               // Get the last digit
        reversed = reversed * 10 + remainder;  // Build the reversed number
        n /= 10;                          // Remove the last digit from the original number
    }
	// Check if the original number is equal to the reversed number
    if (original == reversed) {
        printf("True!\n");
    } else {
        printf("False!\n");
    }
	
	return 0;
}


