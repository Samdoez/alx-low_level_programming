#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: The destination of the string
 * @src: the source of the string to b added
 * @n: The limit of the concatenation
 *
 * Return: a pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0;
	int j = 0;

	while (dest[dlen])
	{
		dlen++;
	}
	while (j < n && src[j])
	{
		dest[dlen] = src[j];
		dlen++;
		j++;
	}
	dest[dlen + n + 1] = '\0';
	return (dest);
}
