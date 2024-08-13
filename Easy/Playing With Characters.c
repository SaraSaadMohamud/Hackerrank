/*
 ============================================================================
 Name        : Playing.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : print Three Lines of Code
               1) print the Character Enter by User
               2) print the String Enter by USer
               3) print the Sentence Enter By USer
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char Character;
	char String[100];
	char Sentence[100];

	fflush(stdin);
	fflush(stdout);
	scanf("%c",&Character);

	fflush(stdin);
	fflush(stdout);
	scanf("%s",String);

	fflush(stdin);
	fflush(stdout);
	scanf("\n");
	scan("%[^\n]%*c",Sentence);



	printf("%c\n",Character);
	printf("%s",String);
	printf("%s\n",Sentence);
	return (0);
}
