#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers
 * Return: Always 0
 */
int main(void)
{
	int n, m;

	for (n = 0; n <= 99; n++)
	{
	for (m = n; m <= 99; m++)
	{

	putchar(n / 10 + '0');
	putchar(n % 10 + '0');

	putchar(' ');

	putchar(m / 10 + '0');
	putchar(m % 10 + '0');
	if (n != 99 || m != 99)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}

	putchar('\n');
	return (0);
}
