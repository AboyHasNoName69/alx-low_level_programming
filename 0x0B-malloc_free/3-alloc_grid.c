
#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers.
* @width: width of the array.
* @height: height of the array.
*
* Return: pointer of an array of integers
*/
int **alloc_grid(int width, int height)
{
	int **gridlayout;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	gridlayout = malloc(height * sizeof(int *));
	if (gridlayout == NULL)
	{
		free(gridlayout);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		gridlayout[i] = malloc(width * sizeof(int));
		if (gridlayout[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(gridlayout[i]);
			free(gridlayout);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			gridlayout[i][j] = 0;
	return (gridlayout);
}
