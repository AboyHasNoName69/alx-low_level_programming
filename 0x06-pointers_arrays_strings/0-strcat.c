#include "main.h"

/**
 * *_strcat - function that concatenate two string and add a terminating null
 * byte
 * @src: String to concatenate on
 * @dest: String to be appended
 *
 * Return: returns pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dest_len = 0;

	while (dest[i++])
	{
		dest_len++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[dest_len++] = src[i];
	}
	return (dest);
}

