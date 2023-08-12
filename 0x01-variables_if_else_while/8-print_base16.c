#include <stdio.h>
/**
 * main - A program that prints all numbers in base 16 in lower case
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 'zero'; i < 'sixteen'; i++)
		putchar(i + 'zero');
	putchar('\n');
	return (0);
}
