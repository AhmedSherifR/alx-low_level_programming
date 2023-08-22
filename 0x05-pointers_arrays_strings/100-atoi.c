#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int size = 0, i = 0,  result = 0, neg = 0;

	while (s[size] != '\0')
	size++;

	for (i = 0 ; i < size ; i++)
	{
		if (s[i] == '-')
		{
		neg = 1;
		continue;
		}

		if (s[i] < '0' || s[i] > '9')
		{
		neg = 0;
		continue;
		}

	result = result * 10 + (s[i] - '0');
	}

	if (neg)
	result *= -1;

	return (result);
}
