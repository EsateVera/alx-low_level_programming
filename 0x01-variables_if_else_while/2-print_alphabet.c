#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print alphabet in lowercase
 * Return: Always 0
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
