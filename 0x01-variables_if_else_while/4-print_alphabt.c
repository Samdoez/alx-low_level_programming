#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{	char loww, e, q;
	e = 'e';
	q = 'q';

for (loww = 'a'; loww <= 'z'; loww++)

{
	if (loww != e && loww != q)
{
		putchar(loww);
}
printf("\n");
return (0);
}
