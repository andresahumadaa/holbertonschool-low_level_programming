#include "holberton.h"
/**
 * jack_bauer - tenemos 24 horas.
 * description: contador de 24 horas
 * Return: Return always void.
 */
void jack_bauer(void)
{
int hour;
int min;
for (hour = 0 ; hour < 24 ; hour++)
{
for (min = 0 ; min < 60 ; min++)
{
_putchar ('0' + hour / 10);
_putchar ('0' + hour % 10);
_putchar (':');
_putchar ('0' + min / 10);
_putchar ('0' + min % 10);
_putchar ('\n');
}
}
}
