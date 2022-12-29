/*Write a C program to convert lowercase string to uppercase*/


#include<stdio.h>
void main()
{
	int i;
	char str1[20];
	char str2[20];
	printf("Enter the string\n");
	scanf("%s", str1);
	for(i=0; str1[i] !='\0'; i++)
		str2[i]=str1[i]-32;
	str2[i]='\0';
	puts(str2);
}

