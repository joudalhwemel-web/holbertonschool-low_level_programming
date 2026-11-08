#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: String to convert
 *
 * Return: Converted integer or 0 if no digits are found
 */
int _atoi(char *s)
{
	int i;
	int sign;
	unsigned int num;

	i = 0;
	sign = 1;
	num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			do {
				num = num * 10 + (s[i] - '0');
				i++;
			} while (s[i] >= '0' && s[i] <= '9');

			if (sign == -1)
				return (-num);
			return (num);
		}
		i++;
	}

	return (0);
}
