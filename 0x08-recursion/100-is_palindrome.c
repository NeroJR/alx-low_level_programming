#include "main.h"

/**
 *is_palindrome - checks whether or not a string is palindrome
 *@s: parameter
 *Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int len;

	len = get_length(s) - 1;

	return (pal(s, --len));
}

/**
 *get_length - returns length of string
 *@s: string
 *Return: length
 */

int get_length(char *s)
{
	if (*s == '\0')
		return (1);

	else
		return (1 + get_length(++s));
}

/**
 *pal - checks whether it is palindrome
 *@s - string
 *@l: length
 *Return: 1 if palindrome, 0 if not
 */

int pal(char *s, int l)
{
	if (*s == *(s + l))
	{
		if (l <= 0)
			return (1);

		else
			return (pal(++s, l - 2));
	}

	else
	{
		return (0);
	}
}
