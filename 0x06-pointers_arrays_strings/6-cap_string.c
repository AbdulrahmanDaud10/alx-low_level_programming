#include "main.h"

/**
 * cap_string - Capitalizes all letters of string
 * @c: each character of a string to be converted to uppercase
 *
 * Description: according to ascii uppercase leeter are 65 to 90
 * to convert letter of a string to uppercase the formalae is
 * character += 32
 * Return: c (Success)
 */
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] > 65 && c[i] <= 90)
		{
			c[i] += 32;
		}
	}
	return (c);
}
