#include "main.h"

/**
* print_alphabet_x10 - Petit programme pour print l'alphabet avec write x10
* Return: 0
*/

void print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10; i++)
{
write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
}
}
