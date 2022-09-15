#include <stdio.h>
#include "main.h"
/**
* print_last_digit - function that prints the last digit of a number
* @l: input letter
*
* Return: Always 0 (Success)
*/
int print_last_digit(int l)
{
	int h;
h = (l % 10);

if (h < 0)
{
	h = (-1 * h);
}
_putchar(h + '0');
return (h);
}
