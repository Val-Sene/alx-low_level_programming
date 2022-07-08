#include "main.h"
/**
 *print_line- to print numbers of lines
 *
 *@n: times line is printed
 * Return: Always 0 (success)
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
