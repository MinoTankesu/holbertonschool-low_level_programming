#include "main.h"

/**
* main - Programme pour ecrire les nombres de 0 a 9.
* @j: j permet de check les multiples de 3 et 5.
* Return: 0
*/

int main(void)
{
int j;
for (j = 1; j <= 100; j++)
{
if (j % 3 == 0 && j % 5 == 0)
{
printf("FizzBuzz");
}
else if (j % 3 == 0)
{
printf("Fizz");
}
else if (j % 5 == 0)
{
printf("Buzz");
}
else
{   
printf("%d", j);
}
if (j < 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
