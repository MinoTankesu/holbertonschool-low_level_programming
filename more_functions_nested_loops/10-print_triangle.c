#include "main.h"

/**
* print_triangle - Programme pour creer un triangle.
* @size: size
* Return: ...
*/

void print_triangle(int size)
{
int i;
int j;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= i; j++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
