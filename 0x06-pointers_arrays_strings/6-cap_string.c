#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s1: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 *
char *cap_string(char *s1)
{
	int i, j;

	for (i = 0; i < _strlen(s1) - 1; i++)
	{
		if (
			s1[i] == ' ' ||
			s1[i] == '\t' ||
			s1[i] == '\n' ||
			s1[i] == ',' ||
			s1[i] == ';' ||
			s1[i] == '.' ||
			s1[i] == '!' ||
			s1[i] == '?' ||
			s1[i] == '"' ||
			s1[i] == '(' ||
			s1[i] == ')' ||
			s1[i] == '{' ||
			s1[i] == '}' ||
			i == 0
		)
		{
			for (j = 'a'; j <= 'z'; j++)
			{
				if (s1[i + 1] == j && i != 0)
				{
					s1[i + 1] = j - 32;
				} else if (s1[i] == j && i == 0)
				{
					s1[i] = j - 32;
				}
			}
		}
	}
	return (s1);
}
