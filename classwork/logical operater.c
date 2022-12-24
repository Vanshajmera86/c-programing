#include<stdio.h>

void main()
{
	int a=2,b=0;
	if(a&&b) //and operater
	{
		printf("\nline 1 is true");
	}
	else
	{
		printf("\nline 1 is false");
	}
	  
	  
	  b=10,a=0;
	if(a||b) //or operater
	{
		printf("\nline 2 is true");
	}
	else
	{
		printf("\nline 2 is false");
	}
	 a=10,b=2;
	if(!(a&&b)) //not operater
	{
		printf("\nline 3 is true");
	}
	else
	{
		printf("\nline 3 is false");
	}	
}