#include<stdio.h>
#include<stdio.lib>

/**
 * Description:'a program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.'
 * @n:
 * Return: Always 0.
 */

void printFibonacci(int n) {

	int a = 1, b = 2, c;
	printf("%d, %d", a, b);

	for(int i = 3; i <= n; i++) {
		c = a + b;
		printf(", %d", c);
		a = b;
		b = c;
	}
	printf("\n");
}

int main() {
	int n = 98;
	printFibonacci(n);
	return 0;
}
