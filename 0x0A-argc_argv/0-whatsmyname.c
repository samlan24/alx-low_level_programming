#include "main.h"
#include <stdio.h>

/**
 *main - returns the name of the program
 *@argc: arguments in the program
 *@argv: array of arguments
 *Return: returns  zero
 */


int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
