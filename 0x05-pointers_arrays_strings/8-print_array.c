#include "main.h"

/**
 * print_array - a function that prints elements of an array then new line
 * @a: array name
 * @n: number of elements of the array to be printed
 *
 * Return: a and n
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < (n - 1); b++)
	{
		printf("%d, ", a[b]);
	}
	if (b == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
