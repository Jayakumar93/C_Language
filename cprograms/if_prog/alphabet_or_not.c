#include<stdio.h>
void main()
{
	char a;
	printf("Enter the character:\n");
	scanf("%c",&a);
	if((a>=65 && a<=90) || (a>=97 && a<=122))
	{
		printf("%c is an Alphabet\n",a);
	}
	else
	{
		printf("%c is not an Alphabet\n",a);
	}
}

