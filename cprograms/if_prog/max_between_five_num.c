#include<stdio.h>
#include<stdlib.h>
void main()
{
        int a,b,c,d,e;
        printf("Enter any three number:\n");
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
        if(a==b && b==c && c==d && d==e)
        {
                printf("All the values are equal");
                exit(0);
        }
        else if (a>b && a>c && a>d && a>e)
        {
                printf("Biggest number is:%d\n",a);
        }
        else if(b>c && b>d && b>e)
        {
              printf("Biggest number is:%d\n",b);
        }
        else if(c>d && d>e)
        {
                printf("Biggest number is:%d\n",c);
	}
	else if(d>e)
	{
		printf("Biggest number is:%d\n",d);
	}
	else
	{
		printf("Biggest number is:%d\n",e);
	}
}	


