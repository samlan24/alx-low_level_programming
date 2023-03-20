#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Alwasy 0 when successful
 */
int main(void)
{
	int num = 0;
	char letter = 'a';

	while (num >= 0 && num <= 9)
	{
		putchar(num + '0');
		num++;
	}

	while (letter >= 'a' && letter <= 'f')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
