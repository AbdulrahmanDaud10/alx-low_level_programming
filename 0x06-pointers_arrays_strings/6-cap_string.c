#include "main.h"

/**
 * cap_string - Capitalizes all letters of string
 * @string: each character of a string to be converted to uppercase
 *
 * Return: string (Success)
 */
char *cap_string(char *string)
{
	int i, c;
	int trigger;
	char nots[] = ",;.!?(){}\n\t\"";

	for (i = 0, trigger = 0; string[i] != '\0'; i++)
	{
		if (string[0] > 96 && string[0] < 123)
			trigger = 1;
		for (c = 0; nots[c] != '\0'; c++)
		{
			if (nots[c] == string[i])
				trigger = 1;
		}

		if (trigger)
		{
			if (string[i] > 96 && string[i] < 123)
			{
				string[i] -= 32;
				trigger = 0;
			}
			else if (string[i] > 64 && string[i] < 91)
				trigger = 0;
			else if (string[i] > 47 && string[i] < 58)
				trigger = 0;
		}
	}
	return (string);
}
