#include <stdio.h>

int main(void) {
	int N;
	int input_status;
	
	// Prompt the user to enter the value of N
    printf("Enter the value of N: ");
    input_status = scanf("%d", &N);
	
	// Ensure that N is at least 3 to start the sequence correctly
    if (input_status != 1 || N < 3) { 
        printf("Invalid input. N should be at least 3 for this series.\n");
        return 1; // Exit with an error code
    }

    // Initial conditions for the series
    int F1 = 0, F2 = 0, F3 = 1; // Corresponds to F(1), F(2), F(3)
    int Fn;
	
	  printf("%d %d %d", F1, F2, F3); // Print initial values

    for (int i = 4; i <= N; i++) {
        Fn = F1 + F2 + F3; // Calculate F(n) = F(n-1) + F(n-2) + F(n-3)
        printf(" %d", Fn); // Print the next term in the series

        // Update F1, F2, F3 for the next iteration
        F1 = F2;
        F2 = F3;
        F3 = Fn;
    }

    printf("\n");
	return 0;
}
