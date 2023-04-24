#include <stdio.h>
/**
 * main - Entry point
 * description :'prints all possible different combinations of two digits'
 * return : Always 0
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 56; n++)
	for (m = 49; m <= 57; m++)
	{
		putchar(n);
		putchar(m);
		{
		putchar(',');
		putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
