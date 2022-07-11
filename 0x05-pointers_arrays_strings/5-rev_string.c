#include "main.h"
/**
 * rev_string - prints reverse string to stdout
 *
 * @str: character string
 *
 * Return: no return value
 */
void rev_string(char *str)
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
	for (count--; count >= 0; count--)
		_putchar(str[count]);
	_putchar('\n');
}
