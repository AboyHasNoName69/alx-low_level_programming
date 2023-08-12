#include <stdio.h>
/**
 * main - Program that prints all possible different combinations of two digits
 * Return: 0 (Success)
 */
int main(void)
{
	int j;
	int k;

	for (j = 48; j <= 56; j++)
	{
		for (k = j + 1; k <= 57; k++)
		{
			putchar(j);
			putchar(k);
			if (j == 56 && k == 57)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

