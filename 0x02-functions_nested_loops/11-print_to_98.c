#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - numeros n hasta 98.
 * @n: Initial number to the count.
 * description:imprimir numeros naturales hasta el 98
 * Return: Return always void.
 */
void print_to_98(int n)
{
int num;
if (n <= 98)
{
for (num = n ; num <= 98 ; num++)
{
if (num != 98)
{
printf("%d, ", num);
}
else
{
printf("%d\n", num);
}
}
}
else
{
for (num = n ; num >= 98 ; --num)
{
if (num != 98)
{
printf("%d, ", num);
}
else
{
printf("%d\n", num);
}
}
}
}
