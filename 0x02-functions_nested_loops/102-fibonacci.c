#include<stdio.h>

/**
 * Description: 'a program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.'
 * @n
 * Return: Always 0.
 */

void genFibonacci(int n) {
	
	int a = 1, b = 2, c;
	printf("%d, %d", a, b);

	for(int i = 3; i <= n; i++) {
		c = a + b;
		if(c < 0) {
		printf("%d", i);
		}

		printf(", %d", c);
		a = b;
		b = c;

	}

	printf("\n");
}

int main() {
	int n = 50;
	genFibonacci(n);
	return 0;
}
