#include "main.h"

/**
 *print_diagonal - prints diagonals
 *@n: parameter passed to function
 *Return: 0
 */

void print_diagonal(int n)
{
	int i;
	int count = 0;

	if (n > 0)
	{
		while (count < n)
		{
			count++;
			i = count;

			while (i > 1)
			{
				_putchar(' ');
				i--;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
