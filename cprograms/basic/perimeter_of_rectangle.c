#include<stdio.h>
void main()
{
	int Rectangle_Length,Rectangle_Breath,Rectangle_Perimeter;
	printf("Enter the Length and Breath of Rectangle:\n");
	scanf("%d%d",&Rectangle_Length,&Rectangle_Breath);
	Rectangle_Perimeter=2*(Rectangle_Length+Rectangle_Breath);
	printf("Perimeter of Rectangle is:%d\n",Rectangle_Perimeter);
}
