#include "main.h"

/**
 * print_alphabet_x10 - Make alphabet x10 time
 *
 * Return:void
 */

void print_alphabet_x10(void)
{
	char C;
	int i = 0;

	while (i <= '0')
	{
	for (C = 'a'; C <= 'z'; C++)
	_putchar(C);
	}
	_putchar('\n');
	i++;

}
