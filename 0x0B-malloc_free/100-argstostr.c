#include "main.h"
#include <stdlib.h>

/**
 *argstostr - concatenates all arguments of the progrma
 *@ac: parameter
 *@av: second parameter
 *Return: pointer to a new string
 *	- Null if it fails
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int arg, byte, i = 0;
	int size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}

	str = malloc(1 + (size * sizeof(char)));

	if (str == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[i++] = av[arg][byte];

		str[i++] = '\n';
	}

	str[size] = '\0';

	return (str);
}
