#include "main.h"
/**
 *  _islower - Entry level
 *  Description: 'Function that checks for lowercase character'
 * Return: 1 for lower character 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
