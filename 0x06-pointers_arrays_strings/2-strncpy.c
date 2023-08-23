#include "main.h"

/**
 * *_strncpy - a function that copies a string
 * @n: max number of bytes copied
 * @dest: buffer storing the string copied
 * @src: the source string
 *
 * Return: returns pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	for ( ; a < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
