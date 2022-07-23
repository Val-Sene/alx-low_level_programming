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
	int res;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
			res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}
	else
		printf("Error\n");
	return (0);
}
