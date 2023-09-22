#include "main.h"
#include <stdio.h>
/**
 * _strncat: 'function that concatenate two strings.'
 * @dest: string one.
 * @src: string two.
 * @n: 0
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{

	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (result);
}
