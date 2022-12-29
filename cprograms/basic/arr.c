/*Write a C program to print all negative elements in an array.*/



#include<stdio.h>
#include<string.h>
int main()
{
        int num[20];
        int i,n;
        printf("Enter size of Array:\n");
        scanf("%d", &n);
        printf("Enter the numbers:\n");
        for(i=0; i<=n-1; i++)
        {
                scanf("%d", &num[i]);
		
        }
        printf("The Nagative numbers are:\n");
        for(i=0; i<n; i++)
        {
                if(num[i]<0)
                {
                        printf("%d\t",num[i]);
                }
        }
        return 0;
}


