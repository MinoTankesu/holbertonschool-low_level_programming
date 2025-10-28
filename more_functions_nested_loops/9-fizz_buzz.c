#include "main.h"

/**
* print_diagonal - Programme pour ecrire des diagonals et des espaces.
* @n: n
* Return: ...
*/

int main(void)
{
int j;
for (j = 0; j <= 100; j++)
{
if (j >= 10 && j <= 19)
{ 
printf("1");
printf("%d", j % 10);
printf(" ");
}
else if (j >= 20 && j <= 29)
{
printf("2");
printf("%d", j % 10);
printf(" ");
}
else if (j >= 30 && j <= 39)
{
printf("3");
printf("%d", j % 10);
printf(" ");
}
else if (j >= 40 && j <= 49)
{
printf("4");
printf("%d", j % 10);
printf(" ");
}
else if (j >= 50 && j <= 59)
{
printf("5");
printf("%d", j % 10);
printf(" ");
}
else if (j >= 60 && j <= 69)
{
printf("6");
printf("%d", j % 10);
printf(" ");
}
else if (j >= 70 && j <= 79)
{
printf("7");
printf("%d", j % 10);
printf(" ");
}
else if (j >= 80 && j <= 89)
{
printf("8");
printf("%d", j % 10);
printf(" ");
}
else if (j >= 90 && j <= 99)
{
printf("9");
printf("%d", j % 10);
printf(" ");
}
else if (j == 100)
{
printf("100");
}
else
{
printf("%d", j);
printf(" ");
}
}
printf("\n");
return (0);
}
