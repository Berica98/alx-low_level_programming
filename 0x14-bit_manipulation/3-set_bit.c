#include "main.h"

/**
 * set_bit - program that sets the value of a bit to 1 at a given index.
 * @n: a pointer to set a number
 * @index: an index at which to set a bit
 *
 * Return: 1 if success, or -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}
