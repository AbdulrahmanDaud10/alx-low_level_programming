#include "main.h"

/**
 * rev_string - reverses a string
 * @s: paramter tested
 *
 * Return: void.
 */
void rev_string(char *s)
{
	char myCharacter;
	int i = strlen(s);
	int j = 0;

	while (j < i)
	{
		i--;
		myCharacter = s[j];
		s[j] = s[i];
		s[i] = myCharacter;
		j += 1;
	}
}
