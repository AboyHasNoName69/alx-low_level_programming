#include "main.h"

/**
 * print_square - function that prints a square followed by a new line
 * @size: parameter
 *
 * Return: returns nothing
 */
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < (size - 1); j++)
				_putchar('#');
			_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
