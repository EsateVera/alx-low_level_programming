#include "main.h"
/**
 *  swap_int - Function that swaps the values of two integers.
 *  @a: Integer swap
 *  @b: Integer swap
 *  Return: 0
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
