/*C program to input any character and check whether it is alphabet, digit or
special character.*/

#include<stdio.h>
void main()
{
	char a;
	printf("Enter the Character:\n");
	scanf("%c", &a);
	
        if(a>='A' && a<='Z')
	{
		printf("%c is Upper case Alphabet\n",a);
	}
	else if(a>='0' && a<='9')
	{
		printf("%c is Numeric Value\n",a);
	}
	else if(a>='a' && a<='z')
	{
		printf("%c is Lower case Alphabet\n",a);
	}
	else
	{
		printf("%c is a Symbol\n",a);
	}
}

