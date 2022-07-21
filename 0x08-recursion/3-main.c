#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0/
 */
int main(void)
{
	int r;

	r = factorial(1);
	printf("%d\n", r);
	r = factorial(5);
	printf("%d\n", r);
	r = factorial(-90);
	printf("%d\n", r);
	return (0);
}
