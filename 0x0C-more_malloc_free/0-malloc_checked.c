#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  allocates memory
 * @x: amount of bytes
 *
 * Return: pointer the allocated mem otherwise 98 as failure status value
 */

void *malloc_checked(unsigned int x)
{
	char *p;

	p = malloc(x);
	if (p == NULL)
		exit(98);

	return (p);
}
