// Write a program to calculate the square and cube of numbers 2, 3, and 4.
#include <stdio.h>

int main(void) 
{
	int a = 2;
	int b = 3;
	int c = 4;
	
	void square(int n)
	{
	    printf("%d\n",n*n);
	}
	void cube(int n)
	{
	    printf("%d\n",n*n*n);
	}
	square(a);
	cube(a);
	square(b);
	cube(b);
	square(c);
	cube(c);
	
}

