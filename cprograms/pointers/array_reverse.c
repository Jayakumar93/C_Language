// Arrays using pointer


#include<stdio.h>
int main()
{
	int array[100],n,i;
	int *ptr;
	printf("Enter the no. of Elements(0to100):\n");
	scanf("%d", &n);
	printf("Enter the Elements of Array:\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &array[i]);
		
	}
	i=n;
	ptr=&array[n-1];
	while(i>0)
	{
		printf("Array[%d] is %d in address of %p\n",i,*ptr,ptr);
		i--;
		ptr--;
	}
	return 0;
}
			

