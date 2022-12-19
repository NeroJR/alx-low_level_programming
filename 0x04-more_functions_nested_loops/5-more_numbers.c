#include "main.h"

/**
 *more_numbers - prints 1 to 14 ten times
 *Return: 0
 */

void more_numbers(void)
{
	int i;
	int count = 0;
	int changer;
	int id = 0;

	while (count < 10)
	{
		i = 0;
		for (i = 0; i <= 14; i++)
		{
			changer = i;
			if (i < 10)
			{
				changer = i;
			}
			else
			{
				changer = 1;
			}
			_putchar(changer + '0');

			if (i > 9)
			{
				_putchar(id + '0');
				id++;
			}
		}
		_putchar('\n');

		if (i == 15)
		{
			id = 0;
		}
		count++;
	}
}
