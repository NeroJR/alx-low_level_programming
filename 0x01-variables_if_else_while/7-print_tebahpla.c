#include <stdio.h>

/**
 *main - alphabet in reverse
 *
 *Return: 0
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
