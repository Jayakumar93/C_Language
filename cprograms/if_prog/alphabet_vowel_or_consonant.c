#include<stdio.h>
void main()
{
	char a;
	printf("Enter the Character:\n");
	scanf("%c",&a);
	if((a>=1 && a<=64) || (a>=91 && a<=96) || (a>=123 && a<=127))
	{
		printf("Entered Character not an Alphabet\n");
	}
	else if(a==65 || a==69 || a==73 || a==79 || a==85)
	{
		printf("Given Character is Uppercase Vowel\n");
	}
	else if(a==97 || a==101 || a==105 || a==111 || a==117)
	{
		printf("Given Character is Lowercase Vowel");
	}
	else
	{
		printf("Given Character is a Consonant\n");
	}
}

