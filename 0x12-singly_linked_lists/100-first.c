#include <stdio.h>

/**
 * first - prints a sentence before main function
 * Return: returns nothing
 */

void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
