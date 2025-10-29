#include "main.h"

/**
* _puts - Programme pour print la string.
*@str: pointeur pour savoir le nombre de caractere.
* Return: longueur
*/

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1) 
{
printf(", ");
}
}
printf("\n");
}
