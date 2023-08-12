#include <stdio.h>
/**
 * main - A Program that prints lower case alphabets in reverse
 * Return: 0 (Success)
 */
int main(void)
{
	int j;

	for (j = 'z'; j >= 'a'; j--)
		putchar(j);
	putchar('\n');
	return (0);
}
