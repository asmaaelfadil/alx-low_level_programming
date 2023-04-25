#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
