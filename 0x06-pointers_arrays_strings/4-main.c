#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array in normal order
 * @a: an array of integers
 * @n: the number of elements
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - check code
 *
 * Return: Always 0.
 */

int main(void)
{
	int a[] = {1, 2, 3, 4, 5};

	print_array(a, sizeof(a) / sizeof(int));
	reverse_array(a, sizeof(a) / sizeof(int));
	return (0);
}
