#include "main.h"

/**
 * _isdigit - a function that checks if a character is a digit
 * @c: character to be checked
 *
 * Return: 1 if its a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	return (0);
}
