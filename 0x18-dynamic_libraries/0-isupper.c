#include "holberton.h"
/**
 * _isupper - caracteres en mayusculas
 * description: validar si existe caracteres en mayuscula
 * @c: el caracter
 * Return: 1 (True) 0 (False)
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
