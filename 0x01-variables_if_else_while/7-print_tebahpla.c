#include <stdio.h>
/**
 * main - Beginners level
 * Description: 'Print lowercase alphabet in reverse'
 * Return: Always 0
 */
int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
