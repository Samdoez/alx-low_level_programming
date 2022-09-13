#include <stdio.h>
#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	char l;
	for (l = 'a'; l <= 'z'; l++)
	putchar (l);
}
int main(void)
{       
	print_alphabet(void);
	printf("\n");

return (0);
}

