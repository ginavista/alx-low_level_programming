#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand(0) - RAND_MAX/2;
	if (n>0)
		printf("%d is positve\n",n);
	else if (n == 0)
		printf("%d is zero\n",n);
	else if (n<0)
		printf("%d is negative\n",n);
	return (0);
}
