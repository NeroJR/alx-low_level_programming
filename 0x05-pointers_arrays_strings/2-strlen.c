#include "main.h"

/**
 *_strlen - returns length of a string
 *@s: parameter for function
 *Return: length of string
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		continue;

	return (c);
}
