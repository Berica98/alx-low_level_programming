#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - This program sets the value of a bit to 0 at a given index
 * @n: parameter
 * @index: index that clears a bit
 * Return: 1 success, -1 error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
