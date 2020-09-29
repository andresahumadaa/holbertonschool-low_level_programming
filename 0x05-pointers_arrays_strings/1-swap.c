#include "holberton.h"
/**
 * swap_int - cambiar valores
 * @a: primer numero
 * @b: segundo numero
 * Description: cambiar el valor de dos numeros
 */
void swap_int(int *a, int *b)
{
int t;
t = *a;
*a = *b;
*b = t;
}
