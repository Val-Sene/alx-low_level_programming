#include<unistd.h>
#include "main.h"
/**
 *print_last_digit - shows the last digit
 *of the integer
 *
 * *@i:The integer value
 *
 * Return: The last digit
 */
int print_last_digit(int i)
{
	int l;

	l = i % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
