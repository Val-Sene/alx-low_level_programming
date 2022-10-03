#include "main.h"
/**
 * _strlen -  count the len of characters
 *
 * @s: first integer value
 *
 * Return: no return value
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count += 1;
	}
	return (count);
}
