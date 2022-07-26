#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Write a function that frees a 2 dimensional grid previously created
 * @grid: first integer
 * @height: second integer
 * Return: if executed properly
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid)
}
