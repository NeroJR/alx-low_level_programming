#include "main.h"

/**
 *print_line - prints a line in terminal
 *@n: parameter passed to function
 *Return: 0
 */

void print_line(int n)
{
	int count = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count = 0; count < n; count++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
