#include "main.h"
/**
 * _print_rev_recursion - prints string in reverse
 *
 * @s: updated string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
		_puts_recursion(s + 1);
		_putchar(*s);

}
