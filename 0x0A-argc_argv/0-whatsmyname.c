#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number ofcommand line args
 * @argv: array to hold command line args
 *
 * Return: 0 - success
 */

int main(int argc, char *argv[])
{
	if (argc >= 0)
		printf("%s\n", argv[0]);
	return (0);
}
