/*Write a C program to count total number of words in a string.*/

#include<stdio.h>
int main()
{
	int i,j=1;
	char str[50];
	printf("Einter the String:\n");
	gets(str);
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]==32 && str[i+1] !='\0')
		{
		j++;
		}
	}
	printf("No. of Words is:%d\n", j);
	return 0;
}

