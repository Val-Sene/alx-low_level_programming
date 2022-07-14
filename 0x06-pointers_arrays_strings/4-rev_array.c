#include "main.h"
#include <stdio.h>

/**
 * reverse_array - prints array in a reverse order
 * @a: array of integers
 * @n: number of integers
 *
 * Return: no return value
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		if (i != n - 1)
			printf(", ");
		printf("%d", a[i]);
	}
	printf("\n");
}
