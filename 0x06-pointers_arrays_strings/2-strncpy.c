#include "main.h"

/**
 * _strncpy - function that copies string
 * @dest: The destination of the string
 * @src: the source of the string to b added
 * @n: The limit of the copying
 * Return: a pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (src[b])
	{
		b++;
	}

	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
	}
	return (dest);
}
