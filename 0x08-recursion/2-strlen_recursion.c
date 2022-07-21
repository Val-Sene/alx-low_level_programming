#include "main.h"

/**
 * _strlen_recursion - prints the count of the string
 * @s: the string value
 *
 * Return: returns the count
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
