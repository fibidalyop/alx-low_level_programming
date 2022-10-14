#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program that prints lower and upper case alphabest
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char alphabet = 'a';
	char ALPHABET = 'A';

	while (alphabet <= 'z')
	{
	putchar(alphabet);
	++alphabet;
	}
	while (ALPHABET <= 'Z')
	{
	putchar(ALPHABET);
	++ALPHABET;
	}
	putchar('\n');
	return (0);

}
