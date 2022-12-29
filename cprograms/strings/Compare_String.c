/*Write a C program to compare two strings*/

#include<stdio.h>
int compare(char[],char[]);
int main()
{
	char str1[15];
	char str2[15];
	printf("Enter strings:\n");
	scanf("%s%s", str1,str2);
	int c;
	c=compare(str1,str2);
	if (c==0)
	{
		printf("Strings are Same\n");
	}
	else
	{
		printf("Strings are not Smae\n");
	}
	return 0;
}

