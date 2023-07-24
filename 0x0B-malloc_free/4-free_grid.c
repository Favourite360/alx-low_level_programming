#include <stdlib.h>
/**
 * free_grid - main - frees two dimensional grid
 * @grid: grid - multidimension array of ints
 * @height: height of grid
 * Returns: nothing
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
