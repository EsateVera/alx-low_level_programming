#include "main.h"

/**
 * print_times_table - 'Print the number times table'
 *
 * @n: takes number input
 */
void print_times_table(int n)
{
	int x, y, z;

	if (n <= 15 && n >= 0)
	{
	for (x = 0; x <= n; x++)
	{
	_putchar(48);
	for (y = 1; y <= n; y++)
	{
		z = x * y;
		if (y == 0)
		{
		_putchar(z + '0');
		}
		else if (z < 10 && y != 0)
		{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(z + '0');
		}
		else if (z >= 10 && z < 100)
		{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar((z / 10) + '0');
		_putchar((z % 10) + '0');
		}
		else if (z >= 100)
		{
		_putchar(',');
		_putchar(' ');
		_putchar((z / 100) + '0');
		_putchar(((z / 10) % 10) + '0');
		_putchar((z % 10) + '0');
		}
	}
	_putchar('\n');
	}
	}
}
