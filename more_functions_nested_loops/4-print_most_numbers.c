#include "main.h"

/**
* print_most_numbers - Programme pour print de 0 a 9 sans le 2 et le 4.
* Return: ...
*/

void print_most_numbers(void)
{
int i = 0;
while (i <= 9)
{
_putchar(i + '0');
i++;
if (i == 2 || i == 4)
{
i++;
}
}
_putchar('\n');
}
