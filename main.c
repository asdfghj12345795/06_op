#include<stdio.h>
int square(int n);

int main(void)
{
	int result;
	result = square(5);
	printf("%d", result);
	
}

int square (int n)
{
	return n*n;
}


