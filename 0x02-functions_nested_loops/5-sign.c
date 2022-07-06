#include "main.h"
#include "stdio.h"

/**
 * print_sign - checks sign of a number
 * @n: letter tested
 * return: 0 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-");
		return(-1);
	}
}
