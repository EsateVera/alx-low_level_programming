#include <stdio.h>
#include<stdio.lib>
/**
 * Description:'a program that finds and prints the sum of the even-valued terms, followed by a new line'
 * Return: Always 0
 */
int main() {
	long long int a = 1, b = 2, temp;
	long long int sum = 0;

    while(a <= 4000000) {
	if (a % 2 == 0) {
	sum += a;
	}
	temp = a + b;
	a = b;
	b = temp;
	}

	printf("%lld", sum);
	printf('\n');


	return 0;
}
