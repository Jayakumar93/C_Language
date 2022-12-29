 #include<stdio.h>
void main()
{
	float a,b,sum,sub,multi,div,modular;
	printf("Enter the two numbers:\n");
	scanf("%f%f",&a,&b);
	sum=a+b;
	sub=a-b;
	multi=a*b;
	div=a/b;
	modular=a%b;
	printf("Sum of two numbers:%f\n",sum);
	printf("Subraction of two numbers:%d\n",sub);
	printf("Multiplication of two numbers:%f\n",multi);
        printf("Division of two numbers:%f\n",div);
	printf("Modular of two numbers:%f\n",modular);
}	
