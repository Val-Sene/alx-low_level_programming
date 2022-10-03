#include "main.h"
/**
 * _puts - prints string to stdout
 *
 * @str: character string
 *
 * Return: no return value
 */
void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count += 1;
	}
}
