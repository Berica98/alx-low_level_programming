#include "main.h"
/**
 * _strein - return the length of a string
 * @s: string
 * Return: legth
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
