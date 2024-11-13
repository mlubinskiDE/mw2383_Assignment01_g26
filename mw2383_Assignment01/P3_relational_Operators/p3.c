#include <stdio.h>

int main(void) {
	int var1, var2;
    // Input values for var1 and var2
    printf("Enter value for var1: ");
    scanf("%d", &var1);
    printf("Enter value for var2: ");
    scanf("%d", &var2);

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
