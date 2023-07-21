#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @c: size of the triangle
 */
void print_triangle(int c)
{
	if (c <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= c; i++)
		{
			for (j = i; j < c; j++)
			{
				_putchar(' ');
			}

			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}

