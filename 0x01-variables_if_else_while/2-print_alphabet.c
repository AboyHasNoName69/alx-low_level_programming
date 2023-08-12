#include <stdio.h>
/**
 * main - A program that prints alphabets in lower case, followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

for (i = 'a'; i <= 'z'; i++)
	putchar(i);
putchar('\n');
return (0);
}
