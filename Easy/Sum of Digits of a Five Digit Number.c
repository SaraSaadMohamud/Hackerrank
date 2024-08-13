/*
 ============================================================================
 Name        : Sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Get the Sum of THe five Digits
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned int Number ;
	unsigned int Sum=0;

	fflush(stdin);
	fflush(stdout);
	scanf("%i",&Number);

	for(unsigned int i = Number ; i>0 ; i/=10)
	{
		Sum += (i%10);
	}
	printf("%i",Sum);
	return EXIT_SUCCESS;
}
