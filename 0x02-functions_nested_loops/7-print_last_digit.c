#include "main.h"

/**
 *print_last_digit - outputs last digit
 *
 *@n - parameter passed to function
 *Return: last digit
 */

int print_last_digit(int n)
{
	int x;

	if (n % 10 == 0)
		x = 0;
	else if (n >= 0 && n < 10)
		x = n;
	else if (n < 0 || n > 10)
		x = n % 10;

	return (x);
}
