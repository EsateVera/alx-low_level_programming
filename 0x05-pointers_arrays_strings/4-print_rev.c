#include "main.h"
/**
 * print_rev - Prints a string in reverse, followed by a new line
 * @s: Print string
 * return: 0
 */
void print_rev(char *s)
{
	int length = 0;
	int r;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (r = length; r > 0; r--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

