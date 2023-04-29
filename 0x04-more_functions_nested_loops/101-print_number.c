#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	int i = 1, j;
	unsigned int m;

	if (n < 0)
	{
	_putchar('-');
	n *= -1;
	}

	m = n;

	while (m / i > 9)
	{
	i *= 10;
	}

	for (; i >= 1; i /= 10)
	{
	j = m / i;
	_putchar(j + '0');
	m -= j * i;
	}
}
