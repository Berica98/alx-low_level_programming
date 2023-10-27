#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary to unsigned int
 * @b: A string that takes binary number or numbers
 * Return: numbers that are coverted
 */

unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int m = 0;

	if (!b)
		return (0);
	for (n = 0; b[n]; n++)
	{
		if (b[n] < '0' || b[n] > '1')
			return (0);
		m = 2 * m + (b[n] - '0');
	}
	return (m);
}
