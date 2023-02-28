#include "main.h"
/**
*swap_int - swap two integers
*@a: first integer pointer
*@b: second integer pointer
*Return: null
*/

void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
