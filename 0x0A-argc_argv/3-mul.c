#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints multiplication of two numbers
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
