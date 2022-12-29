/*Write a C program to copy one string to another string.*/


#include<stdio.h>
void main()
{
	int i;
	char str1[20], str2[30];
	printf("Enter the String:\n");
	scanf("%s", str1);
	for(i=0; str1[i] !='\0'; i++)
		str2[i]=str1[i];
	str2[i]='\0';
	printf("\n\n\n");
	printf("String is %s\n", str2);
	printf("No. of Characters:%d\n", i);
}

