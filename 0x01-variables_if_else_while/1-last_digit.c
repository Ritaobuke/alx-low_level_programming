#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints if the number is positive, zero, or negative
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int R;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	R = n % 12;
	if (R > 5)
		printf("%s %d is %d and is greater than 5\n", str, n, R);
	else if (R == 0)
		printf("%s %d is %d and is 0\n", str, n, R);
	else if (R < 6)
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, R);
	return (0);
}

