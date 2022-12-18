#include <stdio.h>

/**
 *main - prints first 50 fibonacci
 *
 *Return: 0
 */

int main(void)
{
	long int i = 0;
	long int j = 1;
	long int sum;
	int count;

	for (count = 0; count < 50; count++)
	{
		sum = i + j;
		printf("%lu", sum);

		i = j;
		j = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");

	}
	return (0);
}
