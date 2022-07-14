#include "main.h"

/**
 * string_toupper - Change all lowercase letter to uppercase in a string
 * @c: string parameter to be tested
 *
 * Description: A to Z in ACSII is 96 to 123, so, to convert a character
 * the formulae is given character- 32 to get ACSII no for the uppercase letter
 * Return: c (Success)
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] > 96 && c[i] < 123)
		{
			c[i] -= 32;
		}
	}
	return (c);
}
