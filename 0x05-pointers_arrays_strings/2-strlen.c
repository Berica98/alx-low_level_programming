#include "main.h"
/**
 * _strlen - Write a function that returns the length of a string
 * @s: the variable pointer at S
 * Return: Always return count
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
