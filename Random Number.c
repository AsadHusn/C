#include<stdio.h>
#include<stdlib.h>	//rand()
#include<time.h>	//time()
int main()
{
	//	seed a static random number
	srand(time(NULL));
	
	//	pick last digit by mod 10
	printf("%d", rand());
	
	printf("\nrandmax = %d", RAND_MAX);
}
