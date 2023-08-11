#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that determines if a number is positive, negetive or zero
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is neegative\n", n);
	return (0);
}
