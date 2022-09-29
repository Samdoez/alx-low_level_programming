#include "main.h"
int check_palindrome(char *s);

/**
 * is_palindrome - check if a string is a palindrome
 * @s: the string to be checked
 *
 * Return: integer value
 */
int is_palindrome(char *s)
{
	if (*s == '0')
	return (1);

	return (check_palindrome(s));
}

/**
 * check_palindrome - check if a string is palindrome
 * @s: the string value to be checked
 *
 * Return: integer
 */
int check_palindrome(char *s)
{
	int l = _strlen_recursion(s) - 1;

	if (*s == s[l])
	{
		s++;
		l--;
	}
	else
	{
		return (0);
	}
	return (1);
}

/**
 * _strlen_recursion - get the length of a string
 * @s: string to get d length from
 *
 * Return: the string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
