#include "main.h"
/**
 * print_alphabet_x10 - 'Print 10 times the alphabet'
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
int i;
int j;
j = 0;


while (j < 10)
{
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');
j++;
}
}