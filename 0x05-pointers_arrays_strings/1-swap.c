#include "main.h"
/**
 * swap_int -  update the pointer value to 98
 *
 * @a: first integer value
 * @b: second integer value
 *
 * Return: no return value
 */
void swap_int(int *a, int *b)
{
	int c = 0;

	c = *a;
	*a = *b;
	*b = c;
}
