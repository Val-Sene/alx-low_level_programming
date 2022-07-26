#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array and initializes with a char
 * @size: array size
 * @c: character value
 *
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
