/*Write a C program to find first occurrence of a character in a given string.*/


#include<stdio.h>
void main()
{
	char str1[50];
	char ch;
	int i,count=0;
	printf("Enter the string:\n");
	gets(str1);
	printf("Enter the Character:\n");
	scanf("%c", &ch);
	for(i=0; str1[i]!='\0'; i++)
	{
		if(str1[i]==ch)
		{
			printf("First occurance of character is %c in the location of %d\n",str1[i],(i+1));
			count++;
			break;
		}
	}
	if(count ==0)
	{
		printf("Sorry the given character is not present in the String\n");
	}
}


