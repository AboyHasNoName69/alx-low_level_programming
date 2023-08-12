#include <stdio.h>
/**
 * main - Program that prints all single digit base 10 numbers starting from 0
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf(i + '0');
	printf('\n');
	return (0);
}
