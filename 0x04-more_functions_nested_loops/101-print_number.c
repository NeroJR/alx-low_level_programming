#include "main.h"

/**
 *print_number - function to print int
 *@n: int to be printed
 *Return: 0
 */

void print_number(int n)
{
	char lid, car;
	int rar;
	int cat = 0;

	if (n < 0)
	{
		_putchar ('-');
		lid = (char)('0' - (n % 10));
		n = n / -10;
	}

	else
	{
		lid = (char)((n % 10) + '0');
		n = n / 10;
	}

	rar = 0;

	while (n > 0)
	{
		rar = rar * 10 + (n % 10);
		n = n / 10;

		cat++;
	}

	while (rar > 0)
	{
		car = (char)((rar % 10) + '0');
		_putchar(car);

		rar = rar / 10;
		cat--;
	}

	while (cat != 0)
	{
		_putchar('0');
		cat--;
	}

	_putchar(lid);
}
