#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: counts of all arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
	{
		printf("%s\n", argv[arg]);
	}
	return (0);
}
