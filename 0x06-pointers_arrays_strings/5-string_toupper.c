#include "main.h"
#include <stdio.h>
/**
 * *string_toupper: 'Changes all lowercase letters of a string to uppercase'
 * @str: pointer.
 * Return: void.
 */
char *string_toupper(char *str)
{
	char *result = str;

	while (*str != '\0')
	{
	if (*str >= 'a' && *str <= 'z')
	{
		*str = *str - ('a' - 'A');
	}
		str++;
	}
	return (result);
}
