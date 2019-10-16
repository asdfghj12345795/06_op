#include <stdio.h>


int factorial(int n)
{
	 int res=1;
 	 int i;
 	
 	for(i=1;i<=n;i++)
 	{
	   res = res * i;
 }
 	return res;
 }

 int combination(int n, int r)
 {
 	int high, low;
 	high = factorial(n);
 	low = factorial(n-r)*factorial(r);
 	
 	return (high/low);
}

 
 int main (void)
 {
 	 float result;
	 int n, r;
 	
 	printf(" input two number for combination : ");
 	scanf("%d %d", &n, &r);
 	result= combination(n,r);
 	
 	printf("The result is %f", result);

	return 0;

 }
