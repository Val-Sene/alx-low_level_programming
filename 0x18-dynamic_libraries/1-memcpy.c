#include "main.h"
/**
 * _memcpy - copies src to  dest
 * @n: bytes
 * @src: source mem
 * @dest: destination mem
 *
 * Return: the pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(i + dest) = *(i + src);

	return (dest);
}
