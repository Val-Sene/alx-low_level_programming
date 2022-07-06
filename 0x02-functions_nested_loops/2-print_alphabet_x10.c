#include<unistd.h>
#include "main.h"
/**
 * print_alphabet_x10 - to print alphabets 10 times
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int times = 0;

	while (times < 10)
	{
		int i = 0;

		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');

	times++;
	}
}
