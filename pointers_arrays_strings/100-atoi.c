#include "main.h"

/**
* _atoi - Programme pour convert une string en un integer.
*@s: s.
* Return: longueur
*/

int _atoi(char *s)
{
int i = 0;
int sign = 1;
int result = 0;
int found_digit = 0;
while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
else if (s[i] >= '0' && s[i] <= '9')
{
found_digit = 1;
result = result * 10 + (s[i] - '0');
}
else if (found_digit)
break;
i++;
}
if (!found_digit)
{
return (0);
}
return (sign *result);
}
