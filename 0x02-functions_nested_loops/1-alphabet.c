#include "holberton.h"

/**
 * print_alphabet - alfabeto minusculas
 * description: imprimir abcedario en minuscula
 * Return: 0
 */
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
