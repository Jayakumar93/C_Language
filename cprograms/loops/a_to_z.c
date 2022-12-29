/*Write a C program to print all alphabets from a to z. - using while loop*/


 /*#include<stdio.h>
void main()
{
	char ch;
	printf("Enter the alphabet:\n");
	scanf("%c",&ch);
	ch='a';

	while(ch<='z')
	{
		printf("%c\n",ch);
		++ch;
	}
}*/




/*Write a C program to print all alphabets from a to z. - using while loop*/


#include<stdio.h>
void main()
{
        char ch;
        printf("Enter the alphabet:\n");
        scanf("%c",&ch);

        do
        {
                printf("%c\n",ch);
                ++ch;
        }while(ch<='z');
}

