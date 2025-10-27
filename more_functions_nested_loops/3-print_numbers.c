#include "main.h"

/**
* print_numbers - Programme pour print de 0 a 9.
* Return: ...
*/

void print_numbers(void)
{
int i = 0;
while (i <= 9)
{
_putchar(i + '0');
i++;
}
_putchar ('\n');
}
