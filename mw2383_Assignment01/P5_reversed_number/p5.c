#include <stdio.h>

int main(void) {
    char input[32];
    int n, original, reversed = 0, remainder;

    // Prompt the user to enter a number
    printf("Enter integer value: ");
    if (fgets(input, sizeof(input), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    // Convert the input to an integer and validate
    if (sscanf(input, "%d", &n) != 1) {
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



