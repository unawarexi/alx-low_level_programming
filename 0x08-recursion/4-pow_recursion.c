#include "main.h"
/**
 *_pow_recursion - function that returns the value of x superscript of y
 *@x: int variable
 *@y: int variable
 *Return: pow recursion
 */

int _pow_recursion(int x, int y)
{
	if
		(y < 0) /* terminate */
{
return (-1);
}
else if (y != 0)
return (x * _pow_recursion(x, y - 1));

else
return (1);
}
