#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/**
 * positive_or_negative - checks for positive and negative
 *
 * Return: Always 0 (Success)
 */
int positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
