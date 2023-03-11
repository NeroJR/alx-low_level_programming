#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - change to give back
 *@argc: size
 *@argv: array
 *Return: 0 if success, 1 if error
 */

int main(int argc, char **argv)
{
	int total;
	unsigned int i;
	char *pt;
	int count = 0;
	int coins[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}

	total = strtol(argv[1], &pt, 10);

	if (!*pt)
	{
		while (total > 1)
		{
			for (i = 0; i < sizeof(coins[i]); i++)
			{
				if (total >= coins[i])
				{
					count += total / coins[i];
					total = total % coins[i];
				}
			}
		}

		if (total == 1)
			count++;
	}

	else
	{
		printf("Error\n");

		return (1);
	}

	printf("%d\n", count);

	return (0);
}
