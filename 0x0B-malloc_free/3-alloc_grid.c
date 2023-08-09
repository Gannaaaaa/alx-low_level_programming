#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **mee;
	int x, y;

	if (height <= 0 || width <= 0)
		return (0);
	mee = malloc(sizeof(*mee) * height);
	if (mee == 0)
		return (0);
	for (x = 0; x < height; x++)
	{
		mee[x] = malloc(sizeof(**mee) * width);
		if (mee[x] == 0)
		{
			while (x--)
				free(mee[x]);
			free(mee);
			return (0);
		}
		for (y = 0; y < width; y--)
		{
			mee[x][y] = 0;
		}
	}
	return (mee);
}
