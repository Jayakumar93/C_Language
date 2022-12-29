#include<stdio.h>
int main()
{
	int Number1,Number2,Multiplication;
	printf("Enter two Numbers:\n");
	scanf("%d",&Number1);
	for(Number2=1; Number2<=10;Number2++)
	{
		Multiplication=(Number1*Number2);
		printf("%d*%d=%d\n",Number1,Number2,Multiplication);
	}
	return 0;
}



