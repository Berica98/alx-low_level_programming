#include <stdio.h>

/**
 * main - To print the size of data types
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
char (a);
int (b);
long int  (c);
long long (d);
float  (e);

print ("Size of a char: %lu byte(s)\n", sizeof(a));
print ("Size of a int: %lu byte(s)\n", sizeof(b));
print ("Size of a long int: %lu byte(s)\n", sizeof(c));
print ("Size of a long long int: %lu byte(s)\n", sizeof(d));
print ("Size of a float: %lu byte(s)\n", sizeof(e));
return (0);
}
