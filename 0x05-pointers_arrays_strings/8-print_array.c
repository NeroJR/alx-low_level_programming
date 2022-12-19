#include "main.h"
#include <stdio.h>

/**
 *print_array - prints array of elements
 *@a: parameter one
 *@n: parameter two
 */

void print_array(int *a, int n)
{
	int x = 0;

	for (n--; n >= 0; n--, x++)
	{
		printf("%d", a[x]);

		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
