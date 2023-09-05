#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - deallocate the memory allocated for a grid
 * @grid: A pointer to a pointer to the grid
 * @height: number of rows in the grid
 * Return: null
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
