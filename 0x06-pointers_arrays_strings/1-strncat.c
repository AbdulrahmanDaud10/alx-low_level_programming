#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination parameter string to be tested
 * @src: source parameter string to be tested
 * @n: number of bytes of str to concantenate
 * Return: a pointer to the resulting string dest (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0' && n > 0; j++, n--, i++)
	{
		dest[i] = src[j];
	}

	return (dest);
}
