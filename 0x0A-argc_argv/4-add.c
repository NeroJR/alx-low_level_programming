#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - adds +ve numbers
 *@argc: size
 *@argv: array
 *Return: 0 if success, 1 if error
 */

int main(int argc, char **argv)
{
	int i, n, sum = 0;
	char *pt;

	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			n = strtol(argv[i], &pt, 10);

			if (!*pt)
				sum += n;

			else
			{
				printf("Error\n");

				return (1);
			}
		}
	}

	prntf("%d\n", sum);

	return (0);
}
