#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a,b,c;
	printf("Enter any three number:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b && b==c)
	{
		printf("All the values are equal");
		exit(0);
	}
	else if (a>b && a>c)
	{
		printf("Biggest number is:%d\n",a);
	}
	else if(b>c)
        {
              printf("Biggest number is:%d\n",b);
        }
	else
	{
		printf("Biggest number is:%d\n",c);
	}
}


