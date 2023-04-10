#include "main.h"
/**
 * swap_int - swaps the values of a and b
 * @a: pointer 0
 * @b: pointer 1
 * Return; 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
