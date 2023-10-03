#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Entry point
 * @grid: Value 1
 * @height: Value of the height
 * Return: summary
 */

void free_grid(int **grid, int height)

{
	int i;

	for (i = 0; i < height;)
	i++;
	{
		free(grid[i]);
	}

	free(grid);
}

