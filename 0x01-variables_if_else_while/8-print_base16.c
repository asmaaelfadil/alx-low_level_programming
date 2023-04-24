#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int n;
	int m;

	for (n = 48; n <= 57; n++)
	{
	putchar(n);
	}
	for (m = 97; m <= 102; m++)
	{
	putchar(m);
	}
	putchar('\n');

	return (0);
}
