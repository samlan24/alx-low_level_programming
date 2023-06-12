#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: number of arguments passed
 * @argv: individual arguments
 * Return: O when successful
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
