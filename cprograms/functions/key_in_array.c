/* W.A.C.P to find a key from the list using functions*/


#include<stdio.h>
void search(int[],int, int); // function declaration
void main()
{
	int Array[100],size,i,key;
	printf("Enter size of the array(1to100)\n");
	scanf("%d", &size);
	printf("Enter the Elements of Array:\n");
	for(i=0; i<size; i++)
	{
		scanf("%d",&Array[i]);
	}
	printf("Enter the Key to search:\n");
	scanf("%d", &key);
	search(Array,size,key);  // function call
}

// function definition
void search(int Array1[100],int size, int key)  
{
	int i,flag=0;
	for(i=0; i<size; i++)
	{
		if(Array1[i]==key)
		{
			flag=1;
		}
	}
	if(flag==1)
	{
		printf("Key Found\n");
	}
	else
	{
		printf("Key not found\n");
	}
}
