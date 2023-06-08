#include "main.h"
/**
 * _puts_recursion - Prints a string and a new line
 * @s:Is the string to print
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
