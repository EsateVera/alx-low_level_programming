#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, j, s = 0, t = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j =  0; av[i][j]; j++)
			t++;
	}
	t += ac;

	str = malloc(sizeof(char) * t + 1);
	if (str == NULL)
		return (NULL);
	for (t = 0; t < ac; t++)
	{
	for (j = 0; av[i][j]; j++)
	{
		str[s] = av[i][j];
		s++;
	}
	if (str[s] == '\0')
	{
		str[s++] = '\n';
	}
	}
	return (str);
}
