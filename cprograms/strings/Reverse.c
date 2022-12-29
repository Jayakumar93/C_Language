/*Write a C program to find reverse of a string.*/

#include<stdio.h>
#include<string.h>
void main()
{
	char str[20], rev_str[20]={0};
	int i,j=0,count=0;
	printf("Enter the String:\n");
	gets(str);
	for(i=0; str[i] !='\0'; i++)
	{
	//	count++;
	}
	printf("%d\n", count);
	j=i-1;
	for(i=0; str[i] !='\0'; i++)
	{
		rev_str[j]=str[i];
		j--;
	}
	rev_str[j]='\0';
	printf("Rrverse of string is %s\n", rev_str);
}


