#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times in lower cases
 * followed by a new line
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
	int b = 0;
	char c = 'a';

	while (b < 0; c <= 'z')
	{
		_putchar(c);
		b++;
		c++;
	}

	_putchar('\n');
}
