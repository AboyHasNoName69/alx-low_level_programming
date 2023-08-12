#include <stdio.h>
/**
 * main - A program that prints all possible combination of single digit number
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	if (i < 9)
		putchar(',');
		putchar(' ');
	putchar('\n');
	return (0);
}
