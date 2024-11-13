#include <stdio.h>

int main(void) {
 int var1, var2;
    int input_status;
    // Prompt and check input for var1
    printf("Enter value for var1: ");
    input_status = scanf("%d", &var1);

    if (input_status != 1) { // Check if input was not an integer
        printf("Invalid input. Please enter an integer value.\n");
        return 1; // Exit with an error code
    }
    // Prompt and check input for var2
    printf("Enter value for var2: ");
    input_status = scanf("%d", &var2);

    if (input_status != 1) { // Check if input was not an integer
        printf("Invalid input. Please enter an integer value.\n");
        return 1; // Exit with an error code
    }
    // Check if var1 is at least two times larger than var2
    if (var1 >= 2 * var2) {
        printf("Pasta\nis\nyummy.\n");
    }
    // Otherwise, check if var2 is more than three times larger than var1
    // and if the remainder of var2 divided by var1 is less than 5
    else if (var2 > 3 * var1 && (var2 % var1) < 5) {
        printf("Fruits\nare\nhealthy.\n");
    }
    // In all other cases
    else {
        printf("Chocolate\nis\nsweet.\n");
    }
	return 0;
}
