#include <stdio.h>
/**
 * main - A program that prints alphabets in lower cases excluding q and e
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	if (i != 'e' && i != 'q')
		putchar(c);
	putchar('\n');
	return (0);
}
