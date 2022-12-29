#include<stdio.h>
void main()
{
	char a;
	printf("Enter the character:\n");
	scanf("%c",&a);
	if(a >=65 && a<=90)
	{
		printf("Given character is Upper Case Alphabet\n");
	}
	else if(a>=97 && a<=122)
        {
                printf("Given character is Lower Case Alphabet\n");
        }
	else if(a>=48 && a<=57)
        {
                printf("Given character is Numeric value\n");
        }
	else
        {
                printf("Given character is Symbol\n");
        }
}



