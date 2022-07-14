#include "main.h"

/**
 * _strncpy - Copy a string from index 0 of destination string
 * @dest: string  parameter to be tested
 * @src: string  prarametr to be tested
 * @n: number of characters to copy over
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
