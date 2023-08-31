#include "main.h"

/**
 * factorial - is a function that prints the factorial of a given number
 * @n: input
 *
 * Return: returns the factorial of a number, and -1 if n < 0; indicating error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if
		(n == 1)
		return (1);
	else if 
		(n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
