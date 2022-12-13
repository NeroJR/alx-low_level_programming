#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * more headers goes there
 * style doc for function main goes there
 * main - Assigns a random number to a variable 
 * States whether it is positive or negative
 *
 * Returns 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n>0)
		printf("%d is positive\n", n);
	else if (n<0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
