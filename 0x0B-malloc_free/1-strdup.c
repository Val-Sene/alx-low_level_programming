#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - points to a space in memory that contains the char
 * @str: character value
 *
 * Return: pointer to character value
 */
char *_strdup(char *str)
{
	char *newstr;
	int i;
	int j;

	if (str == 0)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	newstr = (char *)malloc(sizeof(char) * (i + 1));

	if (newstr == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		newstr[j] = str[j];

	return (newstr);
}
