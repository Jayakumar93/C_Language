/* File open and close*/


#include<stdio.h>
void main()
{
	FILE *f1;
	char c;
//	printf("Data Input\n");
	// Open the file Input
//	f1=fopen("Input","w");

	// Get the char from Keyboard

//	while((c=getchar()) != EOF)
	/* Write a character to Input file*/
//		putc(c,f1);
	/* Close the file Input*/
//	fclose(f1);
	printf("\nData Output\n");
	/* Reopen the file Input*/
	f1=fopen("Input","r");

	/*Read a character from Input*/

	while((c=getc(f1)) != EOF)

	/*Display a character on screen*/

	printf("%c",c);

	/*Close the File Input*/

	fclose(f1);
}


