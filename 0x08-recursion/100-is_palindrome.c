#include "main.h"

/**
 * is_palindrome - checks for a palindrome
 * @s: char array string
 * Return: returns 1 if successful
 */

int is_palindrome(char *s)
{
	int get_leng(char *s);
	int my_find(char *s, int 1);
	int length;

	length = get_leng(s) - 1;

	return (my_find(s, --length));
}

/**
 * get_leng - gets the length of a string
 * @s: string
 * Return: returns the length of the string
 */


int get_leng(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (1 + get_leng(++s));
}

/**
 * my_find - recursive for finding palindrome
 * @s: string
 * @l: length of the string
 * Return: returns 1 if true
 */

int my_find(char *s, int l)
{
	if (*s == *(s + l))
	{
		if (l <= 0)
			return (1);
		else
			return (my_find(++s, l - 2));
	}
	else
		return (0);
}
