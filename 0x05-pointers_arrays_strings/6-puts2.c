#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with first character, followed by a new line
 * @str: input string
 *
 * Return: print
 */
void puts2(char *str)
{
	int a = 0;
	int i = 0;
	int *j = str;
	int k;

	while (*j != '\0')
	{
		j++;
		a++;
	}
	i = a - 1;
	for (k = 0; k <= i; k++)
	{
		if (k % 2 == 0)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
