#include<stdio.h>
#include<stdlib.h>
void main()
{
        int a,b,c,d;
        printf("Enter any three number:\n");
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(a==b && b==c && c==d)
        {
                printf("All the values are equal");
                exit(0);
        }
        else if (a>b && a>c && a>d)
        {
                printf("Biggest number is:%d\n",a);
        }
        else if(b>c && b>d)
        {
              printf("Biggest number is:%d\n",b);
        }
        else if(c>d)
        {
                printf("Biggest number is:%d\n",c);
	}
	else 
        {
                printf("Biggest number is:%d\n",d);
	}
}



