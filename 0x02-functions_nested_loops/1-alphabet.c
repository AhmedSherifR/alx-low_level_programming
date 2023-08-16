#include"main.h"
/**
 *print_alphabet - function that print alphabet in lowercase
 *
 *No return 
 */
void print_alphabet(void)
{
	int i = 97 ;

	while(i < 123 )
       	{
		_putchar(i);
		++i;
	}


	_putchar(10);
}
