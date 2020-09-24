#include "holberton.h"
/**
 * print_most_numbers - immprimir sin el 2 y 4
 *
 */
void print_most_numbers(void)
{
char n;
n = 48;
while (n <= 57)
{
if (n != 50 && n != 52)
{
_putchar(n);
}
n++;
}
_putchar('\n');
}
