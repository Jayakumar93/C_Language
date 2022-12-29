/*Write a C program to check whether a string is palindrome or not.*/
/*
#include<stdio.h>
#include<string.h>
void main()
{
	int i;
        char str1[20];
	char str2[20];
        printf("Enter the String:\n");
        gets(str1);
        strcpy(str2,str1);
	 for(i=0; i<strlen(str1); i++)
        {

                str2[strlen(str1)-i+1] = str1[i];
        }
	if(strcmp(str1,str2)==0)
        {
                printf("%s is a Palindrome\n", str1);
        }
        else
        {
                printf("%s is Not a Palindrome\n", str1);
        }
}
*/


#include<stdio.h>
void main()
{
        int i,j,count=0;
        char str1[20];
        printf("Enter the String:\n");
        gets(str1);
         for(i=0; str1[i]!='\0'; i++)
	 {
	 }
	 j=i-1;
	 while(j>1)
	 {
		 if(str1[j]!=str1[i])
		 {
			 count++;
		 }
	 }
	 printf("%d",count);
	 if(count!=0)
	 {
		 printf("Given String is not a Palindrome\n");
	 }
	 else
	 {
		 printf("Given String is a Palindrome\n");
	 }
}
	 
