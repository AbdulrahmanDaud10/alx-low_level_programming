#include "main.h"

/**
 * _isalpha - checks whether alphabetic character is lower or upper case
 * @c - parameter checked
 * Returns: 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
