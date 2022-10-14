#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program that prints lower case alphabest in reverse order
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
	putchar(alphabet);
	--alphabet;
	}
	putchar('\n');
	return (0);

}
