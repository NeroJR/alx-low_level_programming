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

	x = n % 10;

	if (x < 0)
		x = x * -1;

	_putchar(x + '0');
	return (0);
}
