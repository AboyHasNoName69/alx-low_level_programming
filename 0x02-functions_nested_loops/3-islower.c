#include "main.h"

/**
 * _islower - is a function that checks if a character is lowercase.
 * c: is the character to be checked.
 *
 * Return: 1 if character is lower case, 0 otherwise.
 */
int _islower(void)
{
	int c = 'c';

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
