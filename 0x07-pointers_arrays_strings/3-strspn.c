#include "main.h"
#include <stdio.h>

/**
 *_strspn - function that gets length of prefix substring
 *@s: parameter 1
 *@accept: parameter 2
 *Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;

	for (i = 0; s[i] != ',' && s[i] != '\n' && s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
		}
	}

	return (count);
}
