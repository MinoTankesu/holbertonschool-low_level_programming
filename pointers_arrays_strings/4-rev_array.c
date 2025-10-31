#include "main.h"

/**
* reverse_array - Programme pour reverse le contenue des 2 integers.
*@a: le tableau.
*@n: longueur du tableau.
* Return: ...
*/

void reverse_array(int *a, int n)
{
int i;
for (i = 0; i < n / 2; i++)
{
int temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}
