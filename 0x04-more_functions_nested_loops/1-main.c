#include "main.h"
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	r = _isdigit('5');
	_putchar(r + '0');
	r = _isdigit('9');
	_putchar(r + '0');
	return (0);
}
