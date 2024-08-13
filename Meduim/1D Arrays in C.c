/*
 ============================================================================
 Name        : 1D.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int Index;
	fflush(stdin);
	fflush(stdout);
	scanf("%i",&Index);

	int Array[Index];
	int Sum=0;

	for(int i=0 ; i<Index ; i++)
	{
		fflush(stdin);
		fflush(stdout);
		scanf("%i",&Array[i]);
	}

	for(int i=0 ; i<Index ; i++)
	{
		Sum = Sum + Array[i];
	}
	printf("%i",Sum);

	return 0;
}
