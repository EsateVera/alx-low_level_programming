#include "main.h"

/**
 * positive_or_negative - 'Test negative and positive function'
 * @i: correct output when given a case of 0
 * Return: void
 */
void positive_or_negative(int i)
{

	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
