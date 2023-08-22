#include "main.h"
/**
 * swap_int - swap values of two integers
 * @a:pointer to the first integer argument
 * @b:pointer to the second integer argument
 * return - no output
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
