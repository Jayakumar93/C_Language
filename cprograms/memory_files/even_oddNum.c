/* Write a C program to find Even and Odd numbers*/


#include<stdio.h>
void main()
{
	FILE *f1,*f2,*f3;
	int i,num,size;
	f1=fopen("Integer","w");
	printf("Enter the Size of Integer:\n");
	scanf("%d",&size);
	printf("Enter the Integer numbers:\n");
	for(i=0; i<size; i++)
	{
		scanf("%d",&num);
		if(num <= -1)
		{
			break;
		}
		putw(num,f1);
	}
	fclose(f1);

	f1=fopen("Integer","r");
	f2=fopen("Even","w");
	f3=fopen("Odd","w");
	
	while((num=getw(f1)) !=EOF)
	{
		if(num%2==0)
		{
			putw(num,f2);
		}
		else
		{
			putw(num,f3);
		}
	}
	fclose(f1);
	fclose(f2);
	fclose(f3);

	f2=fopen("Even","r");
	f3=fopen("Odd","r");
	printf("Even numbers:\n");
	while((num=getw(f2)) !=EOF)
	{
		printf("%d\n",num);
	}
	printf("Odd numbers:\n");
	while((num=getw(f3)) != EOF)
	{
		printf("%d\n",num);
	}
	
}

