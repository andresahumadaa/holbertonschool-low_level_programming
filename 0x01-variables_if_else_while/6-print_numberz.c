#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - imprimir numeros 
 * description: imprimir base 10 pero nueva linia
 * Return: 0
 */
int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
}
putchar(10);
return (0);
}
