/*Write a C program to search all occurrences of a character in given string.*/




#include<stdio.h>
void main()
{
	char str[50],ch;
	int j,i,index[50],flag=0;
	printf("Enter the String:\n");
	gets(str);
	printf("Enter the character:\n");
	scanf("%c", &ch);
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]==ch)
		{
			flag++;
			j=i;
			printf("%d\t", (j+1));
		}
	}
	if(flag!=0)
	{
		printf("Total count of given character is: %d\n", flag);
	}
	else
	{
		printf("Sorry Given character not present in the string\n:");
	}
}

