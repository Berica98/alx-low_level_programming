#include "main.h"

/**
 * _strlen_recursion - Print the string length
 * 
 * @s: string
 *
 * Return: Length of string as an int
 */
int _strlen_recursion(char *s);
{
	if (*s ! = '\0')
	{
		return (1 + _strlen_recursion(char *s));
	}
	return (0);
}
