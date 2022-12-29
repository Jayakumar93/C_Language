/*Write a C program to find diameter, circumference and area of circle using Functions*/


#include<stdio.h>
void circle(int);
void main()
{
	int radius;
	printf("Enter the Radius:\n");
	scanf("%d", &radius);
	circle(radius);
}
void circle(int radius)
{
	float diameter,circumference,area;
	diameter=2*radius;
	circumference=2*3.14*radius;
	area=3.14*radius*radius;
	printf("Diameter of a Circle: %0.2f\n",diameter);
	printf("Circumference of a Circle: %0.2f\n", circumference);
	printf("Area of a Circle:%0.2f\n", area);
}

