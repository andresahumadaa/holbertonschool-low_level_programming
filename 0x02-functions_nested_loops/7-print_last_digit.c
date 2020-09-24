#include "holberton.h"

/**
 * print_last_digit - ultimo digito de un numero.
 * @n: el numero a evaluar
 * description: imprime el ultimo digito de un numero
 * Return: Value of "last" digit.
 */
int print_last_digit(int n)
{
int last;
last = n % 10;
if (n >= 0)
{
_putchar (last + '0');
}
else if (n < 0)
{
last = -1 * last;
_putchar (last + '0');
}
return (last);
}
