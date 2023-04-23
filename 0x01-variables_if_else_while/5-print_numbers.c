#include<stdio.h>
/**
 * main - Entry point
 * description 'prints all single digit numbers of base 10'
 * Return : Always 0
 */
int main(void)
{
	/*prints all single digit numbers of base 10*/
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
