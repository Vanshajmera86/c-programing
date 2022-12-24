#include<stdio.h>

void main()
{
	int rollno ,s1,s2,s3,tot;
	char name[20];
	float per;
	printf("\nenter name :");
//	gets(name);
	scanf("%s",&name);
	printf("\nenter rollno :");
	scanf("%d",&rollno);
	printf("\nenter physics marks :");
	scanf("%d",&s1);
	printf("\nenter chemistry marks :");
	scanf("%d",&s2);
	printf("\nenter maths marks :");
	scanf("%d",&s3);
	tot = s1+s2+s3;
	per =(float)tot/3;
	
	printf("\nname :%s",name);
	printf("\nrollno :%d",rollno);
	printf("\ntotal :%d",tot);
	printf("\npercentage :%.2f",per);
	if(per>=75)
	{
		printf("\ndistinction");
	}
	else if(per>=60)
	{
		printf("\nfirst class");
	}
	else if(per>=50)
    {
    	printf("\nsecond class");
	}
	else if(per>=40)		
	{
		printf("\npass class");
	}
    else
    {
    	printf("\nfail");
	}	
}