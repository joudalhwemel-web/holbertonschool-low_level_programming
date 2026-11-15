#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a duplicated string
 * @str: String to duplicate
 *
 * Return: Pointer to duplicated string, or NULL on failure
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int len, i;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	copy = malloc((len + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = str[i];

	copy[i] = '\0';

	return (copy);
}
