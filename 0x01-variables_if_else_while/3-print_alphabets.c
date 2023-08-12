#include <stdio.h>
/**
 * main - A program that prints alphabets in lower cases, and then in upper
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
