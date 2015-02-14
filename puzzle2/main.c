#include <stdio.h>


int main (char ** argv, int argc)
{
	unsigned long long fib = 0;
	unsigned long long sum = 0;
	int i, p, r;

	//get the fib number from stdin
	printf("Enter the number: ");
	scanf("%llu", &fib);
//	printf("%lu", fib);

	//divide by 10^7 and floor
	fib = fib/10000000l;
	
	//set p and r
	p = fib/15;
	r = fib%15;

	//sum all the 3's and 5's from 0 to 15*p
	sum = 60*p + 105*(p-1)*p / 2;

	//sum all the remaining 3's and 5's from
	//15*p to fib
	for(i=(p*15)+3; i<=fib; i+=3)
	{
		sum += i;
	}
	for(i=(p*15)+5; i<=fib; i+= 5)
	{
		if(i%3 != 0) sum += i;
	}
	


	printf("The sum is %llu.\n", sum);

	return 0;
}
