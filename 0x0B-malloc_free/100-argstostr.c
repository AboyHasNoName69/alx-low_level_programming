#include "main.h"
#include <stdlib.h>

/**
* argstostr - concatenates all the arguments of a program.
* @ac: argument count.
* @av: argument vector.
*
* Return: pointer of an array of char
*/
char *argstostr(int ac, char **av)
{
	char *arp;
	int h, i, j, ia;

	if (ac == 0)
		return (NULL);
	for (h = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; av[i][j] != '\0'; j++)
			h++;
		h++;
	}
	arp = malloc((h + 1) * sizeof(char));
	if (arp == NULL)
	{
		free(arp);
		return (NULL);
	}
	for (i = j = ia = 0; ia < h; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			arp[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < h - 1)
			arp[ia] = av[i][j];
	}
	arp[ia] = '\0';
	return (arp);
}
