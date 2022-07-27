#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concats two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *newstr;
	int i;
	int j;
	int k;
	int limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	newstr = malloc(sizeof(char) * (i + j + 1));

	if (newstr == NULL)
	{
		free(newstr);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		newstr[k] = s1[k];

	limit = j;

	for (j = 0; j <= limit; k++, j++)
		newstr[k] = s2[j];

	return (newstr);
}
