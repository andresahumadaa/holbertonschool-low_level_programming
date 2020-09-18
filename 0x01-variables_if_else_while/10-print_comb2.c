#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - numeros
 * description: numeros 0 a 100
 * Return: 0
 */
int main(void)
{
int i, j;
for (i = 48; i < 58; i++)
{
for (j = 48; j < 58; j++)
{
putchar(i);
putchar(j);
if (i != 57 || j != 57)
{
putchar(44);
putchar(32);
}
}
}
putchar(10);
return (0);
}
