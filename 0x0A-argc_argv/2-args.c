#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the count of command line argument
 * @argc: number of args
 * @argv: array to hold args
 *
 * Return: all args in array
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}
