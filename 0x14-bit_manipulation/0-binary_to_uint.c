#include "main.h"

/**
 * binary_to_uint - functions that convert a binary number to an unsigned int.
 * @b: a string containing a binary number or numbers
 *
 * Return: unsigned int with decimal value of binsry number, or 0  error
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int bio;

	bio = 0;
	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		bio <<= 1;
		if (b[a] == '1')
			bio += 1;
	}
	return (bio);
}
