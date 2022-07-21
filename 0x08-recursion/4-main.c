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

	r = _pow_recursion(1, 0);
	printf("%d\n", r);
	r = _pow_recursion(5, 3);
	printf("%d\n", r);
	r = _pow_recursion(1, 80);
	printf("%d\n", r);
	return (0);
}
