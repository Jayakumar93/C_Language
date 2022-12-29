/*Write a C program to count total number of vowels and consonants in a string.*/
 


#include<stdio.h>
void main()
{
	int i, vowels=0, constant=0;
	char str[20];
	printf("Enter the String:\n");
	scanf("%s" ,str);
	for(i=0; str[i] !='\0'; i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
		{
			vowels++;
		}
		else
		{
			constant++;
		}
	}
	printf("No. of Vowels is: %d\n", vowels);
	printf("No. of Constant is: %d\n", constant);
}


