#include "main.h"
#include <stdlib.h>
#include <stdint.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *array;
	size_t count, i;
	unsigned int range;

	if (min > max)
		return (NULL);

	range = (unsigned int)max - (unsigned int)min;
	count = (size_t)range + 1;

	if (count == 0 || count > SIZE_MAX / sizeof(int))
		return (NULL);

	array = malloc(count * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
		array[i] = (int)((unsigned int)min + (unsigned int)i);

	return (array);
}
