#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print single digit numbers (0-9)
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
	printf("%d", digit);
	++digit;
	}
	printf("\n");

	return (0);
}

