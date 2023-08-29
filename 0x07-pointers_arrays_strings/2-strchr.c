#include "main.h"
/**
 * _strchr - function that locates a character in a string
 *@s: first value -char
 *@c: second value - char
 *
 * Return: char with result
 */
char *_strchr(char *s, char c)
{
	if (c == '\0')
		return (s);

	while (*s`)
	{
	if (*s == c)
		{
		return (s);
		}
	s++;
	}
	return (NULL);
}

