#include <stdio.h>
#define LARGE 10000000000

/**
 *main - prints first 98 fibonacci numbers
 *
 *Return: 0
 */

int main(void)
{
	unsigned long int f1 = 0, f2 = 0, b1 = 1, b2 = 2;
	unsigned long int h1, h2, h3;
	int count;

	printf("%lu, %lu, ", b1, b2);

	for (count = 2; count < 98; count++)
	{
		if (b1 + b2 > LARGE || f2 > 0 || f1 > 0)
		{
			h1 = (b1 + b2) / LARGE;
			h2 = (b1 + b2) % LARGE;
			h3 = f1 + f2 + h1;
			f1 = f2;
			f2 = h3;
			b1 = b2;
			b2 = h2;

			printf("%lu%010lu", f2, b2);
		}
		else
		{
			h2 = b1 + b2;
			b1 = b2;
			b2 = h2;
			printf("%lu", b2);
		}
		if (count != 97)
			printf(", ");

	}
	printf("\n");
	return (0);
}
