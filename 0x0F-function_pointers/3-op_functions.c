#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition operator
 * @a: first integer
 * @b: second integer
 * Return: sum of 2 numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substraction operator
 * @a: first integer
 * @b: second integer
 * Return: difference of the the two integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - division operator
 * @a: first integer
 * @b: second integer
 * Return: product of the two integers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two integers
 * @a: first integer
 * @b: second integer
 * Return: result of the division of the integers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - getting the reminder after dividing two integer
 * @a: first integer
 * @b: second integer
 * Return: reminder of the division of the integer
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
