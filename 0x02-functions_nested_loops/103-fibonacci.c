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
	unsigned long sum = 0;
	unsigned long next;

	while (next < 4000000)
	{
		next = i + j;
		i = j;
		j = next;

		if ((next % 2) == 0)
			sum += next;

	}
	printf("%ld\n", sum);

	return (0);
}
