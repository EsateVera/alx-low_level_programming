#include "main.h"
#include <stdio.h>
/**
 * reverse_array: 'Afunction that reverse the content of an array of intergers'
 * @a: pointer
 * @n: number of element in an array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	int j = n - 1;

	while (i < j)
	{
		int temp = a[i];

		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}

}
