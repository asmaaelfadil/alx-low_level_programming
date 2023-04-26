#include "main.h"

void print_alphabet_x10(void);

/**
 * main - Entry point
 * Description: Function that calls print_alphabet_x10 function 10 times
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	print_alphabet_x10();
	}
	return (0);
}

/**
 * print_alphabet_x10 - Prints 10 times the alphabet
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
}
