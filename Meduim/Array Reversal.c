/*
 ============================================================================
 Name        : Array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description :
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
        int Size = Index -1 ;
        int Temp=0;

		for(int i=0 ; i<Index ; i++)
		{
			fflush(stdin);
			fflush(stdout);
			scanf("%i",&Array[i]);
		}

		for(int i =0 ; i< Index/2 ; i++)
		{
			Temp = Array[i];
			Array[i] = Array[Size];
			Array[Size] = Temp;
			Size --;
		}
		for(int i=0 ; i<Index ; i++)
		{
			printf("%i ",Array[i]);
		}
	return 0;
}
