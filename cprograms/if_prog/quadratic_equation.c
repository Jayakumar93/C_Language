/*quadric Equation*/

/* X= (-b+/-sqrt(b2-4*a*c))/2a*/


#include<math.h>        
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a,b,c;
	float Real,Img,Root1,Root2;
	float d;
	printf("Enter three co-efficient values:\n");
	scanf("%d%d%d",&a,&b,&c);
	d=((b*b)-(4.0*a*c));
	if(a==0)
	{
		printf("Roots can't br determined\n");
		exit(0);
	} 
	else if(d==0)
	{
		printf("Root1 & Root2 are Equal\n");
		Root1=Root2=(-b/(2.0*a));
		printf("Root1=%f\n Root2=%f\n",Root1,Root2);
	}
	else if(d>0)
	{
		printf("Real & Defferent\n");
		Root1=(-b/(2.0*a))-(sqrt(d)/(2.0*a));
		Root2=(-b/(2.0*a))+(sqrt(d)/(2.0*a));
		printf("Root1=%f\n Root2=%f\n",Root1,Root2);
	}
	else if(d<0)
	{
		d=(-d);
		printf("Complex number\n");
		Real=(-b/(2.0*a));
		Img=sqrt(d)/(2.0*a);
		printf("Root1=%f+i%f\n",Real,Img);
		printf("Root2=%f-i%f\n",Real,Img);
	}
}
