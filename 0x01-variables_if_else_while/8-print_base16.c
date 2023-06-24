#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;
	int nbr;

	for (nbr = '0' ; nbr <= '9' ; nbr++)
	{
		putchar(nbr);
	}
	for (letter = 'a' ; letter <= 'f' ; letter++)
	{
		putchar(letter);
	}
		putchar('\n');

	return (0);
}
