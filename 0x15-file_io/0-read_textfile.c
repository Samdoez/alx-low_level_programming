#include "main.h"

/**
 * read_textfile: reads a file and prints
 * @fp: the pointer
 * @filename: the number of text to be printed
 * @letters: number of values returned
 *
 *
 * Return: 0 if error happens, if file name is NULL
 * 0 if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char text[30];
	int nlet;
	FILE *fp;

	fp = fopen("readfile.txt", O_RDONLY);

	while (!feof(fp))
	{
		fgets(text, 30, fp);
		_putchar(text[0]);
		nlet++;
	}
	return (nlet);
}

/**
 * main: entry point
 *
 * Return: 0
 */

int main(void)
{
	ssize_t read_textfile('readfile.txt', 13);
	return (0);

}
