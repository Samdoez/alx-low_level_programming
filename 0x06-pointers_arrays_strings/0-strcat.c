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
	char dest[30] = "My school";
	char src[15] = "is great!!!";
	char *ptr;

	ptr = strcat(dest, src);

	return (ptr);
}
