#include "main.h"

/**
 * swap_int - a function that swaps the value of two intergers
 * @a: first integer
 * @b: second integer
 *
 * Return: returns nothing
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
