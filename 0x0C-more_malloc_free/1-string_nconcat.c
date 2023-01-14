#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *@n: how many bytes of 2 to concat
 *Return: pointer to allocated memory or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pt;
	int i = 0, index = 0;
	int len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (; s2[len1] != '\0'; len1++)
		;

	for (; s2[len2] != '\0'; len2++)
		;

	if (n > len2)
		pt = malloc(sizeof(char *) * (len1 + len2 + 1));
	else
		pt = malloc(sizeof(char) * (len1 + n + 1));

	if (pt == NULL)
		return (NULL);

	while (s1[index] != '\0')
	{
		pt[index] = s1[index];
		index++;
	}

	if (len2 <= n)
	{
		while (s2[i] != '\0')
		{
			pt[index++] = s2[i];
			i++;
		}
	}

	else
	{
		while (i < n && s2[i] != '\0')
		{
			pt[index] = s2[i++];
			index++;
		}
	}

	pt[index] = '\0';
	
	return (pt);
}
