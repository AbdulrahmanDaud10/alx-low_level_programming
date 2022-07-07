#include "main.h"

/**
 * _isupper - checks for uppercase characters
 *@c: letter being checked
 *Return: 1 if c is uppercase || 0 if not
 */
int _isupper(int c)
{
	if (c < 65 && c <= 95)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
