#include "holberton.h"
/**
 * print_numbers - imprimir de 0 a 9
 * Descripcion: imprimir del 0 al 9
 */
void print_numbers(void)
{
char n;
n = 48;
while (n <= 57)
{
_putchar(n);
n++;
}
_putchar('\n');
}
