#include "main.h"

/**
 * puts_half - function that print second half of a string followed by new line
 * if odd, print n, n = (length_of_the_string - 1) / 2
 * @str: input string
 *
 * Return: second half of the input
 */
void puts_half(char *str)
{
	int i;
	int n;
	int k;

	k = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		k++;
	}
	n = (k / 2);
	if ((k % 2) == 1)
	{
		n = ((k + 1) / 2);
	}
	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
