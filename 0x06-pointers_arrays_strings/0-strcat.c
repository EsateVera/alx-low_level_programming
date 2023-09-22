#include "main.h"
#include <stdio.h>
/**
 * _strcat: concatenate two string
 * @dest: string one.
 * @src: string two.
 * Return: void
 */

char *_strcat(char *dest, char *src)
{

	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (result);
}
