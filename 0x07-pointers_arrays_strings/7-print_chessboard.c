#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard
 * @a: the array
 *
 * Return: 0 (Success)
 */
void print_chessboard(char (*a)[0])
{
	int i;
	int n;

	for (i = 0; i < 8; i++)
	{
		for (n = 0; n < 8; n++)
		{
			_putchar(a[i][n]);
		}
		_putchar('\n');
	}
}
