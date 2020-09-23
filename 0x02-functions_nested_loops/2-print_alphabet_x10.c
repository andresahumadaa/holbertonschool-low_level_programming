#include "holberton.h"

/**
 * print_alphabet_x10 - alfabeto x10
 * Description: imprimir abcdario en minuscula x 10
 * Return: 0
 */
void print_alphabet_x10(void)
{
char i, l;
for (l = 0; l <= 9; l++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
