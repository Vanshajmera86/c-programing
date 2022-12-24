#include<stdio.h>

struct employee
{
	char name[20];
	char address[50];
	int age,number;
};






void main()
{
  struct employee emp;
  printf("\n\nenter ename :");
  scanf("%s",&emp.name);
  printf("\n\nenter eaddress :");
  scanf("%s",&emp.address);
  printf("\n\nenter eage :");
  scanf("%d",&emp.age);
  printf("\n\nenter enumber :");
  scanf("%d",&emp.number);
  
  printf("\n\n\t----------details---------\n\n");
  printf("\n\nename is :%s",emp.name);
  printf("\n\neaddress is :%s",emp.address);
  printf("\n\neage is :%d",emp.age);
  printf("\n\nenumber is :%d",emp.number);
  
  }