#include<stdio.h>
int compare(char[],char[]);
int main()
{
        char str1[20];
        char str2[20];
        printf("Enter the String1:\n");
        scanf("%s",str1);
        printf("Enter the String2:\n");
        scanf("%s",str2);
        int c= compare(str1,str2);
        if(c==0)
        {
                printf("Strings are same\n");
        }
        else
        {
                printf("Strings are not same\n");
        }
        return 0;
}

