#include "main.h"

/**
 *_strpbrk - function that searches string for bytes
 *@s: parameter 1
 *@accept: parameter 2
 *Return: pointer to byte in s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		i = 0;

		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				return (s);
			}

			i++;
		}

		s++;
	}

	return (0);
}
