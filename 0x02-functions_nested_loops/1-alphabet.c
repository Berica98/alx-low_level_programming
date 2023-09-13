#include "main.h"

/**
 * print_alphabet - Make the alphabet
 *
 * Return:void
 */

void print_alphabet(void)
{
	char cl;

	cl = 'a';
	while (cl <= 'z')
	{
		_putchar(cl);
		cl++;
	}
	_putchar('\n');
}

