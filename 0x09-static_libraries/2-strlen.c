#include "main.h"

/**
* _strlen - Returns the length of a string
* @s: string to count
*
* Return: string length
*/
int _strlen(char *s)
{
	int d = 0;

	for (; *s != '\0'; s++)
	{
		d++;
	}
	return (d);
}
