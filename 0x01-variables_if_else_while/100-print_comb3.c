#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 56; n++)
	{
	for (m = 49; m <= 57; m++)
	{
		if (n != 56 || m != 57)
		{
		putchar(n);
		putchar(m);
		putchar(',');
		putchar(' ');
		}
	}
	}
	putchar('\n');
	return (0);
}
