#include <stdio.h>
#include "main.h"
/**
* _islower - function that checks for lowercase character
* @l: single letter input
*
* Return: Always 0 (Success)
*/
int _islower(int l)
{
	if (l >= 'a' && l <= 'z')
	return (1);

	else
return (0);
}
