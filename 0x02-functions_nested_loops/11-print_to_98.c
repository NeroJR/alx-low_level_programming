#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - prints numbers to 98
 *
 *@n - parameter passed to function
 *
 *Return: 0
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n >= 98)
	{
		printf("%d, ", n);
		n--
	}
	putchar('\n');
}
