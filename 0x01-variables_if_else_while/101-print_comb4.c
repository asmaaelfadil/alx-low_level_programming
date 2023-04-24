#include <stdio.h>

/**
 * main -'Prints all possible different combinations of three digits'
 * Return: Always 0
 */

int main(void)
{
	int x;
	int y;
	int z;

	for (x = 48; x < 58; x++)
	{
	for (y = x + 1; y < 58; y++)
	{
	for (z = y + 1; z < 58; z++)
	{
		putchar(x);
		putchar(y);
		putchar(z);
	if (x != 55 && x != 56)
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
