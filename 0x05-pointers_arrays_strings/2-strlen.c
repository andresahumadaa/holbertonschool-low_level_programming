#include "holberton.h"
/**
 * _strlen - longitud
 * @s: puntero de la cuerda
 * Return: string length
 */
int _strlen(char *s)
{
int i = 0;
while (*(s + i) != '\0')
{
i++;
}
return (i);
}
