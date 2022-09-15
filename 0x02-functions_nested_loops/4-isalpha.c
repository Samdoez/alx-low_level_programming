#include <stdio.h>
#include "main.h"
/**
* _isalpha - function that checks for alphabetic character
* @l: single letter input
*
* Return: Always 0 (Success)
*/
int _isalpha(int l)
{
	if (((l >= 'a') && (l <= 'z')) || ((l >= 'A' && (l <= 'Z')))
	return (1);

	else
return (0);
}
