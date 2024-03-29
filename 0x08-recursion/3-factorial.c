#include "main.h"
#include <string.h>

/**
 *factorial - returns the factorial of a number
 *@n: number given
 *Return: factorial
 */

int factorial(int n)
{
	if (n == 0)
		return (1);

	else if (n < 0)
		return (-1);

	else
		return (n * factorial(n - 1));

	return (0);
}
