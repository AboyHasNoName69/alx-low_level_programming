#include "main.h"

/**
 * _pow_recursion - a function that returns the value of a number,
 * raised to the power of another
 * @x: integer
 * @y: the power
 *
 * Return: the power of a number, -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if
		(y == 0)
			return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
