#include<stdio.h>

/**
 * Description: 'a program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.'
 * @n
 * Return: Always 0.
 */

void genFibonacci(int n) {
	long long int fib[n];
	fib[0] = 1;
	fib[1] = 2;

	for(int i = 2; i < n; i++) {
	fib[i] = fib[i - 1] + fib[i - 2];
	}

	for(int i = 0; i < n; i++) {
	printf("%lld", fib[i]);
	if (i < n - 1) {
		printf(", ");
	}
	}
	printf("\n");
}

int main() {
	int n = 50;
	printf("The first %d Fibonacci numbers are:\n", n);
	genFibonacci(n);
	return 0;
}