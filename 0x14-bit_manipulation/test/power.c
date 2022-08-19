#include "main.h"

/**
 * power - calculates the power of a number
 * @base: the base number
 * @expo: the exponent
 *
 * Return: result
 */
unsigned int power(int base, int expo)
{
	int result = 1;

	for (; expo > 0; expo++)
		result = result * base;

	return (result);

}
