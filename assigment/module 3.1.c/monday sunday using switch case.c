/* WAP to show
1. Monday to Sunday using switch case */


#include<stdio.h>

void main()
{
	char ch;
	printf("\n\tENTER M FOR MONDAY");
	printf("\n\tENTER T FOR TUESDAY");
	printf("\n\tENTER W FOR WEDNESDAY");
	printf("\n\tENTER H FOR THURSDAY");
	printf("\n\tENTER F FOR FRIDAY");
	printf("\n\tENTER S FOR SATURDAY");
	printf("\n\tENTER U FOR SUNDAY");
	
	switch (ch)
	{
		case 'm':
		case 'M':printf("\n\tMONDAY");
		     break;
		case 't':
		case 'T':printf("\n\tTUESDAY");
		     break;
		case 'w':
		case 'W':printf("\n\tWESNESDAY");
		     break;
		case 'h':
		case 'H':printf("\n\tTHURSDAY");
		     break;
		case 'f':
		case 'F':printf("\n\tFRIDAY");
		     break;
		case 's':
		case 'S':printf("\n\tSATURDAY");
		      break;
		case 'u':
		case 'U':printf("\n\tSUNDAY");
			break;
		default :printf("\ninwalid number");	
     }
}