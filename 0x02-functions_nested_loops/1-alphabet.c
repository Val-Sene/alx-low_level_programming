#include<unistd.h>
#include "main.h"
/**
 * print_alphabet - to print alphabets
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	int i = 0;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
