#include<stdio.h>

void main()
{
	int a=10,b=30;
	printf("\n\t\xb2\xb2\xb2\xb2\xb2 swap 2 number wihout 3rd variable \xb2\xb2\xb2\xb2\xb2\xb2");
	printf("\n\tbefor swap :\n-------------\n\ta=%d\n\tb=%d",a,b);
	printf("\n\n\t---*---*---*---");
	a=a+b;//a=40(10+30);
	b=a-b;//b=10(20-30);
	a=a-b;//a=30(40-10);
	printf("\n\n\tafter swap :\n------------\n\ta=%d\n\tb=%d",a,b);
}