#include <stdio.h>

/**
 * main - a function that finds and prints the largest prime factor of a number
 * followed by a new line
 *
 * Return: returns 0
 */

int main(void)
{
	long number = 612852475143;
	int i;

	while (i++ < number / 2)
	{
		if (number % i == 0)
		{
			number /= 2;
			continue;
		}
		for (i = 3; i < number / 2; i += 2)
		{
			if (number % i  == 0)
				number /= i;
		}
	}
	printf("%ld\n", number);
	return (0);
}
