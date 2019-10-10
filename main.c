#include<stdio.h>

int sumTwo ( int a, int b)

{
	int output;
	output = a+ b;
	return output;
	
}

int square (int n)
{
	return n*n;
	
}

int get_max(int a, int b)
{
	if(a>b) return a;
	
	
	return b;
}

int main()
{
 int x, y;
 int output;
 
 x=2;
 y=5;
 
 output= sumTwo(x,y);
 printf("sumtwo : %d\n", output);
 printf("square : %d\n", square(x));
 printf("get_max : %d\n", get_max(x,y));
 
}



