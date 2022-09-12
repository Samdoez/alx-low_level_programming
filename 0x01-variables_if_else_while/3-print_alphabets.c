#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char loww;
for (loww = 'a'; loww <= 'z'; loww++)

{       putchar(loww);
}
for (loww = 'A'; loww <= 'Z'; loww++)
{
	putchar(loww);
}
return (0);
}
