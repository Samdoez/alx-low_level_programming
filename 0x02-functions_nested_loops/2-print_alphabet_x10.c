#include <stdio.h>
#include "main.h"
/**
* print_alphabet_x10 - print lowercase alphabet 10 times
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{	int l, co;
	co = 0;
while (co < 10)
{
	for (l = 'a'; l <= 'z'; l++)
{
	_putchar(l);
}
co++;

_putchar('\n');
}
}
