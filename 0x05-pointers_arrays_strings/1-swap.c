#include "main.h"

/**
 *swap_int - swaps values of integers
 *@a: one int
 *@b: second int
 *Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
