#include "main.h"
#include <stdlib.h>

/**
 *_strdup - returns pointer to newly allocated memory space
 *@str: string passed to function
 *Return: pointer to duplicated string
 */

char *_strdup(char *str)
{
	char *dup_str;
	int i, j = 0, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	dup_str = malloc(1 + (len * sizeof(char)));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		dup_str[j] = str[i];
		j++;
	}

	return (dup_str);
}
