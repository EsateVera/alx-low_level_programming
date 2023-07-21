#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @c: size of the square
 */
void print_square(int c)
{
	if (c <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < c; i++)
		{
			for (j = 0; j < c; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

