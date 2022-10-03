#include<unistd.h>
#include "main.h"
/**
 *_abs - computes the absolute value
 *of the integer
 *
 * *@i:The integer value
 *
 * Return: The absolute value
 */
int _abs(int i)
{
	if (i > 0)
	{
		return (i);
		_putchar(i + '0');
	}
	else
	{
		return (i * -1);
		_putchar(i + '0');
	}
	_putchar ('\n');
}
