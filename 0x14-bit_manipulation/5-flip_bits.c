#include "main.h"

/**
 * flip_bits - checks the number of bits to be changed
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, i = 0;
	unsigned long int future;
	unsigned long int luxe = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		future = luxe >> a;
		if (future & 1)
			i++;
	}

	return (i);
}
