#include "main.h"
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	return (0);
}
