#include "holberton.h"
/**
 * print_square - imprimir cuadro
 * @size: cantidad de veces
 */
void print_square(int size)
{
int f, c;
if (size > 0)
{
f = 0;
while (f < size)
{
c = 0;
while (c < size)
{
_putchar('#');
c++;
}
f++;
_putchar('\n');
}
}
if (size <= 0)
{
_putchar('\n');
}
}
