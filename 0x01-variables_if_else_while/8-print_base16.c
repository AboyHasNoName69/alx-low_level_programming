#include <stdio.h>
/**
 * main - A program that prints all numbers in base 16 in lower case
 * Return: 0 (Success)
 */
int main(void)
{
	int j;

	for (j = 48; j < 58; j++)
		putchar(j);
	for (j = 97; j < 103; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
