#include "dog.h"
#include <stdlib.h>

/**
 *new_dog - create new dog
 *@name: str
 *@age: int
 *@owner: str
 *Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *scoob;
	int i, j, k;
	char *n, *m;

	scoob = malloc(sizeof(struct dog));

	if (scoob == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;

	n = malloc(sizeof(char) * i + 1);

	if (n == NULL)
	{
		free(scoob);
		return (NULL);
	}

	m = malloc(sizeof(char) * j + 1);

	if (m == NULL)
	{
		free(n);
		free(scoob);
		return (NULL);
	}

	for (k = 0; k <= i; k++)
		n[k] = name[k];

	for (k = 0; k <= j; k++)
		m[k] = owner[k];

	scoob->name = n;
	scoob->age = age;
	scoob->owner = m;

	return (scoob);
}
