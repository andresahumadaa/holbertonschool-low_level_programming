#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - imprimir
 * description: imprimir sin la p
 * Return: 0
 */
int main(void)
{
int i;
for (i = 97; i < 123; i++)
{
if (i != 101 && i != 113)
{
putchar(i);
}
}
putchar(10);
return (0);
}
