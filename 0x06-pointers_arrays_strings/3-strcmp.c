#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if s1 == s2, negative number if s1 < s2,positive number if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int dif = 0;

	while (1)
	{
		if (s1[a] == '\0' && s2[a] == '\0')
		{
			break;
		}
		else if (s1[a] == '\0')
		{
			dif = s2[a];
			break;
		}
		else if (s2[a] == '\0')
		{
			dif = s1[a];
			break;
		}
		else if (s1[a] != s2[a])
		{
			dif = s1[a] - s2[a];
			break;
		}
		else
			a++;
	}
	return (dif);
}
