#include "main.h"

/**
 * _strcat - concatenate two srings
 * @dest: parameter tested
 * @src: parameter to be tested
 * Return: dest (Success)
 */
char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
