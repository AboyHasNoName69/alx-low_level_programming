#include "main.h"

/**
 * print_line - function that draws a straight line on the terminal
 * @n: parameter
 *
 * Return: returns nothing
 */
void print_line(int n)
{
	while (n-- > 0)
		_putchar('_');
	_putchar('\n');
}
