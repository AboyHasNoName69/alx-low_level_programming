#include "main.h"

/**
 * print_most_numbers - function that prints from 0 to 9 skipping 2 and 4,
 * followed by a new line
 *
 * Return: return nothing
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if ((i == 50) || (i == 52))
			continue;
		_putchar(i);
	}
	_putchar(10);
}
