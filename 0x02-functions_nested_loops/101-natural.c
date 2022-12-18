#include "main.h"
#include <stdio.h>

/**
 *main - sums multiples of 3 and 5
 *
 *Return: 0
 */

int main(void)
{
	int sum = 0;
	int n;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
		{
			sum = sum + n;
		}
	}
	printf("%d", sum);
	return (0);
}
