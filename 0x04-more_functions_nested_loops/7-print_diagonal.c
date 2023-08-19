#include "main.h"

/**
 * print_diagonal - a function that draws a digonal line on the terminal
 * @n: parameters
 *
 * Return: returns nothing
 */
void print_diagonal(int n)
{
	int dis;
	int space;

	if (n > 0)
	{
		for (dis = 0; dis < n; dis++)
		{
			for (space = 0; space < dis; space++)
				_putchar(' ');
			_putchar('\\');
			if (dis == (n - 1))
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
