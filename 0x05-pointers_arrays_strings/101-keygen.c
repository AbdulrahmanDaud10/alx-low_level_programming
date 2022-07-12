#include "main.h"
#include <stdio.h>
#include <time.h>

int main(void)
{
	int myRand;
	int count;
	int total;

	srand(time(NULL));
	for (count = 0; total = 2772; total > 122; count++)
	{
		myRand = (rand() % 125) + 1;
		printf("%c", myRand);
		total -= myRand;
	}
	printf("%c", total);

	return (0);
}
