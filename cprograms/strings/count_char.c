/*Write a C program to count occurrences of a character in given string.*/



#include<stdio.h>

void main()
{
	char str[50],ch;
	int i,j,flag=0;
	printf("Enter the String:\n");
	gets(str);
	printf("Enter the chracter:\n");
	scanf("%c", &ch);
	for(i=0; str[i]!='\0'; i++)
        {
                if(str[i]==ch)
                {
                        flag++;
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

	

