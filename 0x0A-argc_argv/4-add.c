#include <stdio.h>
#include <stdlib.h>


/**
 * is_positive_number -checks whether a string has digitals only
 * @str: pointer
 * Return: returns 1 if the string has positive digits
 */


int is_positive_number(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * main - returns sum of positive digits
 *@argc: number of arguments
 *@argv: argument vector
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
