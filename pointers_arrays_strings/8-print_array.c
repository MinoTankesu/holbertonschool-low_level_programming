#include "main.h"

/**
* print_array - Programme pour print la string.
*@a: pointeur pour savoir le nombre de caractere.
*@n: longueur du tableau.
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
