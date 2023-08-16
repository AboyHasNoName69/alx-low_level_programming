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
	char c;

	while (b < 10)
	{
		c = 'a';
		while (c <= 'z');
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		b++;
	}
}
