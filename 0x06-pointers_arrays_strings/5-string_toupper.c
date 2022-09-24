#include "main.h"

/**
 * cap_string - Function to change to lowercase
 * @s: string to hold
 *
 * Return: char value
 */
char *cap_string(char *s)
{
	int a = 0, i;
	int spchar = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[a])
	{
		i = 0;

		while (i < spchar)
		{
			if ((a == 0 || s[a - 1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))
			{
				s[a] -= 32;
				i++;
			}
		}
		a++;
	}
	return (s);
}
