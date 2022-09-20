#include "main.h"
/**
*swap_int - swap the values of two integers
*
*@a: An integer to swap
*@b: Another integer to swap also
*
* Return: void
*/
void swap_int(int *a, int *b)
{
	int bok;

	bok = *a;
	*a = *b;
	*b = bok;
}
