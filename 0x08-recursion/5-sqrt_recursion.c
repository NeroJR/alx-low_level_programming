#include "main.h"

/**
 *_sqrt_recursion - returns the square root of number
 *@n: number passed
 *Return: returns the natural squareroot
 */

int _sqrt_recursion(int n)
{
	return (helper(n, 1));
}

/**
 *helper - helper function
 *@x: parameter 1
 *@y: parameter 2
 *Return: square root or -1
 */

int helper(int x, int y)
{
	int square;

	square = y * y;

	if (square == x)
		return (y);

	else if (square < x)
		return (helper(x, y + 1));

	else
		return (-1);
}
