#include <stdio.h>
#include "main.h"
/**
* jack_bauer - function thta prints every minute  Jack Bauer
* h = hour, m = minutes
*
* Return: Always 0 (Success)
*/
void jack_bauer(void)
{
	int h, m;
for (h = 0; h < 24; h++)
{
	for (m = 0; m < 60; m++)
{
	_putchar((h / 10) + '0');
	_putchar((h % 10) + '0');
	_putchar(':');
	_putchar((m / 10) + '0');
	_putchar((m % 10) + '0');
	_putchar('\n');
}
}
}

