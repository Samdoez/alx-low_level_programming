#include "3-calc.h"
#include <stdio.h>
#include <stdio.h>

/**
 * op_add - the add
 * @a: the a
 * @b: the b
 *
 * Return: the return
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - the sub
 * @a: the a
 * @b: the b
 *
 * Return: the return
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - the mul
 * @a: the a
 * @b: the b
 *
 * Return: the return
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - the div
 * @a: the a
 * @b: the b
 *
 * Return: the return
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_div - the mod
 * @a: the a
 * @b: the b
 *
 * Return: the return
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
