/*Write a C program to find total number of alphabets, digits or special character
in a string.*/


// if((a>=1 && a<=64) || (a>=91 && a<=96) || (a>=123 && a<=127))

#include<stdio.h>
void main()
{
	int i,alphabet=0,characters=0,number=0;
	char str[30];
	printf("Enter the String;\n");
	scanf("%s", str);
	for(i=0; str[i] !='\0'; i++)
	{
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
		{
			alphabet++;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			number++;
		}
		else
		{
			characters++;
		}
	}
	printf("The no. of Alphabets is %d\n", alphabet);
	printf("The no. of Numbers is %d\n", number);
	printf("The no. of Special Char is %d\n", characters);
}




