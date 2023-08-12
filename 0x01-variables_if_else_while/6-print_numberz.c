#include <stdio.h>
/**
 * main - Program that prints single digit numbers in base 10 starting from 0
 * Return: 0 (Success)
 */
int main(void)
{
	int j;

	for (j = 0; j < 10; j++)
		putchar(j + '0');
	putchar('\n');
	return (0);
}
