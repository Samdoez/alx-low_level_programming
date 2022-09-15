#include <stdio.h>
#include "main.h"
/**
* print_sign - function that prints the sign of a number
* @l: input letter
*
* Return: Always 0 (Success)
*/
int print_sign(int l)
{
	if (l > 0)
{
	_putchar('+');
	return (1);
}
else if (l == 0)
{
	_putchar('0');
	return (0);
}
else
{
_putchar('-');
return (-1);
}
}
