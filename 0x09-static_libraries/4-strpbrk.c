#include "main.h"

/**
 * _strpbrk - search for string
 * @s: initial string
 * @accept: second string
 *
 * Return: a pointer to the byte in s that matches bytes in accept,
 * NULL if otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; *(i + s) != '\0'; i++)
	{
		for (j = 0; *(j + accept) != '\0'; j++)
		{
			if (*(i + s) == *(j + accept))
				return (i + s);
		}
	}
	return ('\0');
}
