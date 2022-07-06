#include<unistd.h>
#include "main.h"
/**
 *print_sign - Shows + if the input is greater than
 *0. Another case, shows -
 *
 * *@n:The integer value
 *
 * Return: 1 for integers greater than 1. 0 for the rest for lesser integer
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar ('\n');
}
