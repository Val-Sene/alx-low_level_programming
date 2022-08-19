#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary to decimal
 * @b: string value
 *
 * Return: a decimal value
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int count = 0;
	int length_of_power;
	int decimal_number = 0;
	int num_b;

	while (*(b + i) != '\0')
	{
		count += 1;
		i++;
	}
	length_of_power = count - 1;
	num_b = atoi(b);

	while (num_b != '\0')
	{
		decimal_number += (num_b % 10) * power(2, 2);
		length_of_power--;
		i++;
		num_b /= 10;
	}
	return (decimal_number);
}
