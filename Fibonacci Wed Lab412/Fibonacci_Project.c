/*
 ============================================================================
 Name        : Fibonacci_Project.c
 Author      : puser
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "fib_asm_1.h"

long long int fib_c(long long int n);

int main(void) {
	long long int fib_index = 0, i, fib_number = 0;


	fib_index = 7;
	puts("Fibonacci Number Generator, please enter no of terms you want (>0 and < 20)");

	// scanf("%lld", &fib_index);

	for (i = 0; (i <= fib_index) && (fib_number >=0); i++)
		{
			fib_number = fib_c(i);
			printf("%lld\t", fib_number);
			if (fib_number < 0)
			{
				printf ("Out of range error\n");
				break;
			}

		}

	printf("\nNow for the asm sequence:\n");

	for (i = 0; (i <= fib_index) && (fib_number >=0); i++)
	{
		fib_number = fib_asm1(i);
		printf("%lld\t", fib_number);
		if (fib_number < 0)
		{
			printf ("Out of range error\n");
			break;
		}
	}

	printf("\n");



	return EXIT_SUCCESS;
}


long long int fib_c(long long int an)
{
	long long int i, a, b, c;

	a = 0;
	b = 1;
	c = 0;

	if (an < 0)
		return -1;
	else if (an > 20)
		return -1;
	else if (an < 2)
		return an;
	else
		for (i = 2; i <= an; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}

	return b;

}
