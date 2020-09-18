#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - numeros 16
 * description: imprimir base 16 minusculas
 * Return: 0
 */
int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
}
for (i = 97; i < 103; i++)
{
putchar(i);
}
putchar(10);
return (0);
}
