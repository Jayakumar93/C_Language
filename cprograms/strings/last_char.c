/*Write a C program to find last occurrence of a character in a given string.*/


#include<stdio.h>
#include<string.h>
void main()
{
	char str[50]; 
	char ch;
	int j, k,i,count=0;
	printf("Enter the String:\n");
	gets(str);
	printf("Enter the Character:\n");
	scanf("%c", &ch);
	for(i=0; str[i]!='\0'; i++);
	j=i-1;
	for(j=0; str[j]!='\0'; j++)
	{
		if(str[j]==ch)
		{
			count++;
			k=j;
		}
	}
	if(count!=0)
	{
		printf("The last occurance Character is %c at the location of %d\n", ch,(k+1));
	}
	else
	{
		printf("Sorry the given character not present in the String\n");
	}
}

