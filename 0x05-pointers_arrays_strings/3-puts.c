#include "main.h"

/**
 *  puts - prints a string
 *  @str: the string
 *  Description: _put to print the lenth of the string to standars output
 *
 *  Return: the length of the string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}

