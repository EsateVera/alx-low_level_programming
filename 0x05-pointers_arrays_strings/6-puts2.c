#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int length = 0;
	int x = 0;
	char *y = str;
	int c;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	x = length - 1;
	for (c = 0 ; c <= x ; c++)
	{
		if (c % 2 == 0)
	{
		_putchar(str[c]);
	}
	}
	_putchar('\n');
}

