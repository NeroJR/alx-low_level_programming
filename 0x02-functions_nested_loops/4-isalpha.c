#include "main.h"

/**
 *_isalpha - checks for alphabetic
 *
 *@c: parameter passed to function
 *Return: 1 if positive
 *        0 if negative
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
