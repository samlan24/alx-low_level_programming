#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 when successful
 */
int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
