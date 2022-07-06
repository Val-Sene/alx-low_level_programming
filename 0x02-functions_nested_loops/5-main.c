#include "main.h"
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(n + '0');
	_putchar('\n');
	n = print_sign(-5);
	_putchar(',');
	_putchar(' ');
	_putchar(n + '0');
	_putchar('\n');
	return (0);
}
