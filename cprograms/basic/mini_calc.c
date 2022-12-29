#include<stdio.h>
void main()
{
	int a,b,sum,sub,multi,div,modu;
	char Operator;
	printf("Enter the Operator\n");
	scanf("%c",&Operator);
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);

	switch (Operator)
	{
		case '+':
			sum=(a+b);
			printf("sum=%d",sum);
			break;
		case '-':
                        sub=(a-b);
                        printf("sub=%d",sub);
			break;
           	case '*':
                        multi=(a*b);
                        printf("multi=%d",multi);
			break;
		case '/':
                        div=(a/b);
                        printf("div=%d",div);
			break;
		default:
			printf("Enter proper Operator\n");
	}
}


	
