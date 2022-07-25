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
	int res = 0;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			res += atoi(argv[i]);

		}
		printf("%d\n", res);
	}
	else if (argc == 1)
		printf("%d\n", 0);
	return (0);
}
