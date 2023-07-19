#include "main.h"

/**
 * print_sign - 'Print the sign of a number'
 * @n: The numbers to be checked
 * Return: 1 for positve num, -1 for negative num, 0 for anyhting else
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
