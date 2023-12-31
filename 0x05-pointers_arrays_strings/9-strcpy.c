#include "main.h"

/**
 * char *_strcpy - function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 *
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
