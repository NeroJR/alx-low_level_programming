#include "main.h"
#include <stdio.h>

/**
 *_strcmp - function that compares two strings.
 *@s1 : variable
 *@s2 : variable
 * Return: Concatinated string.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int ii = 0;

	while ((s1[i] == s2[ii]) && s1[i] != '\0' && s2[ii] != '\0')
	{
		i++;
		ii++;
	}

	return (s1[i] - s2[ii]);
}
