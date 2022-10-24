#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: function that takes a pointer to an int as parameter,
 * updates the value it points to 98.
 * Return: 0
 */

int main(void)
{
	int a;
	int *p;

	a = 98;
	p = &a;

	_putchar("%d\n", *p);

	return (0);
}

