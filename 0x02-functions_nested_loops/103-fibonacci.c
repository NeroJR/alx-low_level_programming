#include <stdio.h>

/**
 *main - fibonacci upto 4m
 *
 *Return: 0
 */

int main(void)
{
	unsigned long i = 0;
	unsigned long j = 1;
	unsigned long sum;
	unsigned long rn_sum;

	while (1)
	{
		rn_sum = i + j;

		if (rn_sum > 4000000)
			break;

		if (rn_sum % 2 == 0)
			sum = sum + rn_sum;

		i = j;
		j = rn_sum;
	}
	printf("%ld\n", sum);

	return (0);
}
