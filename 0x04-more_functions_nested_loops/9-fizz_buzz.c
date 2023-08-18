#include <stdio.h>

/**
 * main - prints Fizz for multiples of 3, Buzz for multiples of 5, and FizzBuzz
 * for multiples of both 3 and 5. Otherwise, prints the number.
 * Return: 0
 */
int main(void)
{
	int i = 1;

	while (i < 101)
	{
	if (i % 3 == 0)
		{
		printf("fizz ");
		i++;
		continue;
		}
	if (i % 5 == 0)
		{
		printf("buzz ");
		i++;
		continue;
		}
	printf("%d ", i);
	i++;
	}
	putchar(10);
	return (0);
}
