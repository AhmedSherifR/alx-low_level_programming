#include "main.h"

/**
 * _puts - print passed text
 *
 * @str: This is my entry
 *
 */

void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
