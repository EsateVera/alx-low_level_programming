#include "main.h"
#include <stdio.h>
/**
 *_strncpy: Aa function that copies a string.'
 *@dest: String one.
 *@src: string two
 *@n: 0
 *Return: void.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (result);
}
