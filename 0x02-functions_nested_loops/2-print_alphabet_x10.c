#include "main.h"

/**
 * void print_alphabet_x10(void)
 * print lowercase alphabet 10 times
 *
 * Return: void (Success)
 */
void print_alphabet(void)
{
	int i = 97 , j = 1;

	while(j < 11)
	{
		while(i < 123 )
		{
		putchar(i);
		++i;
		}
	putchar(10);
	i =97;

	++j;
	}
}

