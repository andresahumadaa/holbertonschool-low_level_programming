#include "holberton.h"
/**
 * largest_number - 3 numeros
 * @a: uno
 * @b: dos
 * @c: tres
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
int largest;
if (a >= b && a >= c)
{
largest = a;
}
else if (b >= a && b >= c)
{
largest = b;
}
else
{
largest = c;
}
return (largest);
}
