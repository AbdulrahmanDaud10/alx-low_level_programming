#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string tested
 * @s2: the second string tested
 *
 * Description: should return -int if s1 < s2, o if matching && +int if s1 > s2
 * Return: void (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
