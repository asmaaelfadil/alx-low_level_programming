#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse.
 *
 * @s : a string in reverse.
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int i;
	int n;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (n = i; n > 0; n--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

