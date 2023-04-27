#include <stdio.h>

/**
 *main - Prints the add of the Fibonacci numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int a = 1, b = 2, c, i;

	printf("%d, %d", a, b);
	for (i = 0; i < 53; i++)
	{
	c = a + b;
	printf(", %d", c);
	a = b;
	b = c;
	}
	printf("\n");
	return (0);
}
