#include "main.h"

/**
 * char *_strcat - function to concatenate two strings
 * @dest: string to be added to
 * @src: string to be appended from
 *
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dset[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}

