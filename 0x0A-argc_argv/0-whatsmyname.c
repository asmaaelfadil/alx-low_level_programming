#include <stdio.h>

/**
 * main - Write a program that prints its name
 * @argc: number of arguments
 * @argv: array of arguments
 * REturn: 0
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
	return (1);
}