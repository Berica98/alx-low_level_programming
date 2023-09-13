#include "main.h"

/**
 * _isalph - Check for alphabetic characters
 * @c: The character to be checked
 * Return: 1 for alphabetic characters or 0 for anything else
 **/

int  _isaph(int c)

{

if ((c >= 65 && c <= 95) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}


