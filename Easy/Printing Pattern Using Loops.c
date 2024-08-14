/*
 ============================================================================
 Name        : Printing.c
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
	int Number;

	fflush(stdin);
	fflush(stdout);
	scanf("%i",&Number);

	for(int i=0 ; i<(Number*2-1) ; i++)
    {
        printf("%i ",Number);
    }
    printf("\n");
    ////////////////////////////////////////////////////////
	for(int i = Number-1 ; i>0 ; i--)
	{
		for(int K = Number ; K>i ; K-- )
        {
            printf("%i ",K);
        }
		for(int j=(i*2-1) ; j>0 ; j--)
		{
			printf("%i ",i);
		}
		for(int K = i+1 ; K<=Number ; K++)
        {
            printf("%i ",K);
        }
		printf("\n");
	}
	/////////////////////////////////////////////////////
	for(int i = 2 ; i<Number ; i++)
	{
		for(int K = Number ; K>=i ; K-- )
        {
            printf("%i ",K);
        }
        for(int j=(i*2-1) ; j>2 ; j--)
		{
			printf("%i ",i);
		}
		for(int K = i ; K<=Number ; K++)
        {
            printf("%i ",K);
        }
		printf("\n");
	}

	for(int i=0 ; i<(Number*2-1) ; i++)
    {
            printf("%i ",Number);
    }
	return 0;
}
