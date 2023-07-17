#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Beginners level
 * Description: 'Prints all possible different combinations of two digits'
 * Return: Always 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j <= 10; j++)
		{
			if (j != i)
			{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');
			if (i == 8 && j == 0)
			continue;
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
