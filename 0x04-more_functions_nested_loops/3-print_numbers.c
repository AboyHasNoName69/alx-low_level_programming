#include "main.h"

/**
 * print_numbers - function thats prints from 0 to 9, followed by a new line
 *
 * Return: returns nothing
 */
void print_numbers(void)
{
	int number = 48;

	for (number = 48; number < 58; number++)
	{
		_putchar(number);
	}
	_putchar(10);
}
