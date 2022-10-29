#include "main.h"

/**
 * binary_to_uint - convert binary to integer
 * @b: value to be converted
 * @val: the int
 *
 * Return: the converted number, or 0 if b is othewise
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, len = 0;

	printf("the value of b naw is %s\n", b);

	if (b[0] == 1 | b[0] == 0 )
	{
		while (b != '\0')
		{
			len++;
			b++;
		}
		return len;
	}
	
	for (i = 0; i < len; i++)
	{
		b[i]
	}

}

/**
 * main - entry point
 * @val: print converted int
 * Return always 0
 */
int main(void)
{
	unsigned val;

	binary_to_uint("11");
	return 0;
}
