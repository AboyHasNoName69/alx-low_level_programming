#include <stdio.h>
/**
 * main - Program that prints all possible combinations of two 2-digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j = 0;

	while (i <= 99)
	{
	j = i + 1;
	while (j <= 99)
	{
		putchar(i / 10 + '0');
		putchar(i % 10 + '0');
		putchar(' ');
		putchar(j / 10 + '0');
		putchar(j % 10 + '0');
	if (i != 98 || j != 99)
		{
		putchar(',');
		putchar(' ');
		}
		j++;
	}
	i++;
	}
	putchar('\n');
	return (0);
}
