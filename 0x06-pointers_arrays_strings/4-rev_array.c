#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array
 * @a: array
 * @n: number of elements
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (j = n - 1; j > n / 2; j--)
	{
		i = a[n - 1 - j];
		a[n - 1 - j] = a[j];
		a[j] = i;
	}
}
