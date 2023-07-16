#include <stdio.h>
/**
 * main - Beginner level
 * Description: 'Print alphabet in lowercase exceot q and e'
 * Return: Always 0
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i == 133 || i == 101)
		{
			i++;
			continue;
		}
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
