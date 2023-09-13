#include<stdio.h>

/**
 * Description:'a program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.'
 * @n:
 * Return: Always 0.
 */


// Function to calculate and print Fibonacci numbers recursively
void printFibonacci(int a, int b, int count, int maxCount) {
    
	if (count > maxCount) {
		printf("\n");
		return;
	}

	// Print the current Fibonacci number
	printf("%d", a);

	// Print a comma and space unless it's the last number
	if (count < maxCount) {
		printf(", ");
	}

	// Calculate the next Fibonacci number
	int next = a + b;

	// Recursive call with updated values
	printFibonacci(b, next, count + 1, maxCount);
}

int main() {
	int n = 50;
	int a = 1, b = 2;

	// Print the first two Fibonacci numbers manually
	printf("%d, %d, ", a, b);

	// Call the recursive function to print the rest
	printFibonacci(b, a + b, 3, n);

	return 0;
}

