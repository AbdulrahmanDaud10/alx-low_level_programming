#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - return pointer to a newly allocated space in memory
 * that contains a copy of the string given as a parameter
 * @str: string pointer to be duplicated
 * Return: pointer of the duplicated string
 * NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *a;
	int i, c;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++) /*Determine number of characters of str*/
	{
		continue;
	}

	a = malloc(i * sizeof(*a) + 1);
	if (a == NULL) /*Confirms malloc did not fail*/
	{
		return (NULL);
	}

	for (c = 0; c < i; c++)
	{
		a[c] = str[c];
	}

	a[c] = '\0';
	return (a);
}
