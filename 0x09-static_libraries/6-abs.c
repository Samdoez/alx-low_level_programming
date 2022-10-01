#include <stdio.h>
#include "main.h"
/**
* _abs - computes all the absolute value of an integer
* @al: input letter
*
* Return: Always 0 (Success)
*/
int _abs(int al)
{
	return (al * ((al > 0) - (al < 0)));
}
