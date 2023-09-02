#include "main.h"
/**
 * _strstr - function that locates a substring.
 *@haystack: first value -char
 *@needle: second value - char
 *
 * Return: char with result
 */
char *_strstr(char *haystack, char *needle)
{

	register char *a, *b;

	b = needle;

	if (*b == 0)
		return (haystack);

	for ( ; *haystack != 0; haystack += 1)
	{
	if (*haystack != *b)
		continue;

	a = haystack;
	while (1)
	{
	if (*b == 0)
		return (haystack);

	if (*a++ != *b++)
		break;
	}
	b = needle;
	}
	return (NULL);
}



