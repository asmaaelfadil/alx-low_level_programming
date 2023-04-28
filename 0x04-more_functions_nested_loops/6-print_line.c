#include "main.h"
/**
 * Print_line - function that draws a straight line.
 *
 *@n: the number of times the character _ should be printed
 *Return : no return
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	_putchar(95);
	}
	_putchar('\n');
}
