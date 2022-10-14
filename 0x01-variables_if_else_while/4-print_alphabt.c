#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program that prints lower case alphabest
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet == 'e' || alphabet == 'q')
			++alphabet;
		putchar(alphabet);
		++alphabet;
	}
	putchar('\n');
	return (0);

}
