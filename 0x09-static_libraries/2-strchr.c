#include "main.h"
/**
 * _strchr - finds a character in string
 * @s: string
 * @c: char
 *
 * Return: the c
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; *(i + s) != '\0'; i++)
		if (*(i + s) == c)
			return (i + s);

	if (*(i + s) == c)
		return (i + s);
	return ('\0');
}
