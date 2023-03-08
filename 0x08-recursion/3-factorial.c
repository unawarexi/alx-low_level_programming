#include "main.h"
/**
 *factorial - function returning factorial of a given number
 *@n: pointer  memory to assign values
 *Return: factorial
 */

int factorial(int n)
{
if (n == 0)

return (1);

else if (n < 0)
return (-1);
else
return (n * factorial(n - 1));

}
