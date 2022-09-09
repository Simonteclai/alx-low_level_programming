#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/* betty style doc for function main goes there */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					scanf("enter a random number", &n);
					if(n>0);
					printf("is positive");
					if(n==0);
					printf("is zero");
					else
						printf("is negative");

					return (0);

}
