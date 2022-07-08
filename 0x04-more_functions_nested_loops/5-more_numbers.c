#include "main.h"
/**
 * more_numbers- to print numbers from 1 to 14
 *
 * Return: Always 0 (success)
 */
void more_numbers(void)
{
	int i, c;

	for (i = 1; i < 11; i++)
	{
		for (c = 0; c < 15; c++)
		{
			if (c >= 10)
				_putchar((c / 10) + 48);
			_putchar((c % 10) + 48);
		}
		_putchar('\n');
	}
}
