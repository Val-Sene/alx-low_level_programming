#include "main.h"
/**
 * _memset - prints a constant to memory location
 * @s: memory location
 * @b: constant byte
 * @n: bytes to fill
 *
 * Return: the pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(i + s) = b;

	return (s);
}
