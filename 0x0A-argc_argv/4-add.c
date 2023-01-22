#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 *main - add +ve int
 *@argc: size
 *@argv: array
 *Return: 0 if success, 1 if failure
 */

int main(int argc, char const **argv)
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[1][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
