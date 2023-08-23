#include "main.h"

/**
 * *_strncat - function that concatenate two strings but adds inputed number
 * of bytes
 * @src: string to be done at end of @dest
 * @dest: string to append on
 * @n: integer parameter
 *
 * Return: returns new concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int dest_len = 0;

	while (dest[i++])
	{
		dest_len++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[dest_len++] = src[i];
	}
	return (dest);
}
