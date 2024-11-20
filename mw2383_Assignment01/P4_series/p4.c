#include <stdio.h>

//A very well-known series in Mathematics is the series where each new number F (n) is the result of the addition of the last two numbers of the fibonacci sequence 
//F (n) = F (n − 1) + F (n − 2) with F (1) = 0, F (2) = 1
//Your task is to calculate an altered version of that original series, which is instead mathematically defined as:
//F (n) = F (n − 1) + F (n − 2) + F (n − 3) with F (1) = 0, F (2) = 0, F (3) = 1

// Write a program that calculates this series series up to n==N with N as an integer variable that is set in your code

int main(void) {
	int N = 10; // Set the value of N as required
	int F1 = 0, F2 = 0, F3 = 1; // Initial values F(1), F(2), F(3)
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
