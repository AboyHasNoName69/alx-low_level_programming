#include <stdio.h>

/**
 * main - a program that prints numbers from 1 to 100, but prints Fizz for
 * numbers in multiples of 3 and Buzz for numbers in multiples of 5
 *
 * Return: returns 0
 */
int main(void)
{
	int i;

	while (i++ < 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
		{
			if (i != 100)
				printf("Buzz");
			else
				printf("Buzz");
		}
		else
			printf("%d ", i);
		printf("\n");
	}
	return (0);
}
