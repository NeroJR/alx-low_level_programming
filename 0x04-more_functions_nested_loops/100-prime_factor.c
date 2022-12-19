#include <stdio.h>
#include <math.h>

/**
 *main - prime factors
 *Return: 0
 */

int main(void)
{
	int c;
	long n = 612852475143;

	for (c = (int) sqrt(n); c > 2; c++)
	{
		if (n % c == 0)
		{
			printf("%d\n", c);
			break;
		}
	}
	return (0);
}
