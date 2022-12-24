  /*2. Vowel or Consonant using switch case */

#include<stdio.h>

void main()
{
	char ch;
	printf("\nenter a character :");
	scanf("%c",&ch);
	
	switch (ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':printf("\nti is a vowel");
		       break;
		default :printf("\nit is a consonant");
		       break;
	}
}
	