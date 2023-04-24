#include <stdio.h>

/**
 * main - 'Prints all possible different combinations of three digits'
 * return: Always 0
 */

int main(void)
{
	int x;
	int y;
	int z;

	for (x = 47; x <= 55; x++)
	{
	for (y = x + 1; y <= 56; y++)
	{
	for (z = y + 1; z <= 57; z++)
	{
		putchar(x);
		putchar(y);
		putchar(z);
	if (x != 55 || x != 56 || y != 57)
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
