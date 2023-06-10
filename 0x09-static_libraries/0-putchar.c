#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: the character we print
 * Return: returns 1 if successful
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
