/*47. Write a C program to find maximum between three numbers using conditional/ternary*/




#include<stdio.h>
void main()
{
	int a,b,c,max;
	printf("Enter any three numbers:\n");
	scanf("%d %d %d", &a,&b,&c);
	max=a>b? (a>c ? a:c) : (b>c ? b: c);
	printf("The Beggest number is:%d\n", max);
}

