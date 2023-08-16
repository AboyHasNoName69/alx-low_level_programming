#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times in lower cases
 * followed by a new line
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
	int b;

	for (b = 0; b < 10; b++)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			 letter++;
		
		}

	_putchar('\n');
	}
}
