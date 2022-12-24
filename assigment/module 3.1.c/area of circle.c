#include<stdio.h>

void main()
{
	float radious,length,width,b,h,area;
	printf("\nenter radious of circle :");
	scanf("%f",&radious);
	area=3.14159*radious*radious;
	printf("\narea of circle : = %.2f\n",area);
	printf("\nenter length of rectengale :");
	scanf("%f",&length);
	printf("\nenter width of rectengale :");
	scanf("%f",&width);
	
 /*	calculate area of rectengale*/
	area=length*width;
	
 /*	print area of rectengale*/
	printf("area of rectengale =%f sq. units",area);
	printf("\n enter breath of tringle :");
	scanf("%f",&b);
	printf("\nenter height of tringle :");
	scanf("%f",&h);
	
 /*	calculate area of tringle*/
	area=b*h/2;
	
/*	print area of tringle */
	printf("\narea of tringle =%f",area);
	
	
	
	
	
	
	
	
	
	
	
	
}