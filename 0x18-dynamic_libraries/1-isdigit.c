#include "holberton.h"
/**
 * _isdigit - numero de 0 a 9
 * @c: numero
 * description: comprobar numero de 0 a 9
 * Return: 1 (True) 0 (False)
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
