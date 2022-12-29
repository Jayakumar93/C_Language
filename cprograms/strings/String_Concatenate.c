/*Write a C program to concatenate two strings.*/



#include<stdio.h>
void main()
{
	int i,j,k;
	char first_name[12]={"Jaya kumar"};
	char second_name[12]={"Hema priya"};
	char third_name[12]={"Magizhan"};
	char name[40];
	for(i=0; first_name[i] !='\0'; i++)
		name[i]=first_name[i];
	name[i]=' ';
	for(j=0; second_name[j] !=0; j++)
	       name[i+j+1]=second_name[j];
	name[i+j+1]=' ';
	for(k=0; third_name[k] !=0; k++)
		name[i+j+k+2]=third_name[k];
	name[i+j+k+2]='\0';
	printf("The Name is %s\n", name);
}


