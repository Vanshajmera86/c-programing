#include<stdio.h>

void main()
{
	int age;
	char name[45];
	float salary;
	
	printf("\n\n\xb2\xb2\xb2 personal details \xb2\xb2\xb2\n\n");
	
	printf("\nenter your name :");
	//scanf("%s",&name);
	gets(name);
	printf("\nenter your age :");	
	scanf("%d",&age);
	printf("\nenter your salary :");
	scanf("%f",&salary);
	
	printf("\nname is :%s",name);
	printf("\nage is :%d",age);
	printf("\nsalary is :%f",salary);
}