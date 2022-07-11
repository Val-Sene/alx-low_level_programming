#include "main.h"
/**
 * print_rev - prints reverse string to stdout
 *
 * @str: character string
 *
 * Return: no return value
 */
void print_rev(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			break;
		}
		count += 1;
	}
	for (count--; count >= 0; count--)
		_putchar(str[count]);
	_putchar('\n');
}
