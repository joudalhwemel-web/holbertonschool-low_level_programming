#include "main.h"
#include <stdlib.h>
#include <stdint.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	size_t total, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = (size_t)nmemb * size;

	if (total / nmemb != size)
		return (NULL);

	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
		ptr[i] = 0;

	return (ptr);
}
