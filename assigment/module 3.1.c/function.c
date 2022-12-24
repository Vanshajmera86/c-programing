#include<stdio.h>

void f1()
{
	printf("\nf1 is called");
}

void f2()
{
	f1();
	printf("\nf2 is called");
	f2();
}


void main()
{
	f1();
	f2();
}