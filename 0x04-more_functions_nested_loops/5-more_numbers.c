#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return : void
 */
void more_numbers(void)
{
	int n = 1;

	while (n < 11)
	{
	int i = 0;

		for (i ; i <= 14; i++)
		{
		if (i > 9)
		_putchar(i / 10 + '0');

		_putchar(i % 10 + '0');
		}
	n++;
	_putchar(10);
	}
}
