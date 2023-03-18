#include <stdio.h>
/**
 * main - entry point using putchar to display alphabets
 *
 * Return: always 0 when successful
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
