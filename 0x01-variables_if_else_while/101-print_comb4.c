#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m, n, o;

	for (m = '0'; m < '9'; m++)
	{
		for (n = m + 1; n <= '9'; n++)
		{
			for (o = n + 1; o <= '9'; o++)
			{
				if ((m != n) != o)
				{
					putchar(m);
					putchar(n);
					putchar(o);

					if (m == '7' && n == '8')
				      		continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
