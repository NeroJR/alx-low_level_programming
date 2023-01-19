#include "main.h"

/**
 *is_prime_number - checks whether or not a number is prime
 *@n: number to check
 *Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);

	else if (n == 2)
		return (1);

	else
		return (check_prime(n, i));
}

/**
 *check_prime - helper function
 *@x: number
 *@y: parameter
 *Return: 1 if prime, 0 if not
 */

int check_prime(int x, int y)
{
	if (y == x - 1)
		return (1);

	else if (x % y == 0)
		return (0);

	else if (x % y != 0)
		return (check_prime(x, y + 1))

	return (0);
}
