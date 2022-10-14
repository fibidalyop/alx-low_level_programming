#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers of base16- lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 48; /*48; decimal representation of 0 for base 16*/

	while (digit <= 102) /*102; decimal representation of letter f*/
	{
		putchar(digit);

		/* move to 96*/
		if (digit == 57)
			digit += 39;
		++digit;
	}
	putchar('\n');

	return (0);
}
