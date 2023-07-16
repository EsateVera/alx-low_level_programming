#include <stdio.h>
/**
 * main - Beginners level
 * Description: 'Print all single digit number of base 10 starting from 0'
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + 48);
	}
	putchar('\n');
	return (0);
}
