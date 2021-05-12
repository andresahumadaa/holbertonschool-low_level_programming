#include "holberton.h"

/**
 * _islower - buscar carcter minusculas.
 * @c: busca caracter en min.
 * Return: 1 if c is lowercase
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
