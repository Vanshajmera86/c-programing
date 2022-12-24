 /*Write a program to make Simple calculator (to make addition, subtraction,
multiplication, division and modulo) */
#include<stdio.h>

void main()
{
	int a;
	int b;
	printf("\nenter value a :");
	scanf("%d",&a);
	printf("\nenter value b :");
	scanf("%d",&b);
	printf("\n\ta=%d\n\tb=%d :",a,b);
	printf("\naddition :%d",(a+b));
	printf("\nsubtraction :%d",(a-b));
	printf("\nmultiplication :%d",(a*b));
	printf("\ndivision :%.f",(float)a/b);
}