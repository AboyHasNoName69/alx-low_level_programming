#include "main.h"
/**
 * main - A program that prints alphabets in lower case followed by a new line
 *Return: 0 (Success)
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

}
int main(void)
{
	print_alphabet();
	return (0);
}
