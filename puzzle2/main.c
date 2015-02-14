#include <stdio.h>


int main (char ** argv, int argc)
{
	unsigned long fib = 0;
	unsigned long sum = 0;
	int i;

	//get the fib number from stdin
	printf("Enter the number: ");
	scanf("%lu", &fib);
//	printf("%lu", fib);

	//divide by 10^7 and floor
	fib = fib/10000000l;
	
	//sum the 5's
	for(i=0; i <= fib; i+= 5)
	{
		sum += i;
	}

	//sum the 3's
	for(i=0; i<=fib; i+=3)
	{
		if(i%5 != 0) 		// if it's divisible by 5, we've already summed it
			sum += i;
	}

	printf("The sum is %lu.\n", sum);

	return 0;
}
