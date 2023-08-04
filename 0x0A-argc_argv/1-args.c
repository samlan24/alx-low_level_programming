#include <stdio.h>

/**
 * main - returns number of arguments passed
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
