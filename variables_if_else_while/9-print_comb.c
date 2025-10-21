#include <stdio.h>

/**
* main - Print les chiffres de 0 a 9 avec virgule et espace
* Return: 0
*/
int main(void)
{
int i;
for (i = 48; i <= 57; i++)
{
putchar(i);
if (i != 57)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
