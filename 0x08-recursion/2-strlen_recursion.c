#include "main.h"
#include <string.h>

/**
 *_strlen_recursion - returns the length of string
 *@s: parameter
 *Return: returns lenght of string
 */

int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s != '\0')
	{
		i += _strlen_recursion(s + 1);
	}

	else
	{
		i--;
	}

	return (i);
}
