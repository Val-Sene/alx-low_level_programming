#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the count of command line argument
 * @argc: number of args
 * @argv: array to hold args
 *
 * Return: count of args
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;
	int count = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			count += 1;
		printf("%d\n", count);
	}
	else
		printf("%d\n", 0);
	return (0);
}
