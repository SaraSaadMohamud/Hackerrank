/*
 ============================================================================
 Name        : Bitwise.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int Max1,Max2,Max3;
int main(void)
{
	int Max_Count,Max_Result;
	int i=1 , j=2;
	int And,OR,XOR;

	fflush(stdin);
	fflush(stdout);
	scanf("%i %i",&Max_Count,&Max_Result);

	while((i< Max_Count))
	{
		for(int k=j ; k<= Max_Count ; k++)
		{
			And = i & k; // 001 & 010 = 0
			OR  = i | k;
			XOR = i ^ k;

			if((Max1 < And) && (And < Max_Result))
			{
				Max1 = And;
			}
			if ((Max2 < OR ) && (OR < Max_Result))
			{
				Max2 = OR;
			}
			if((Max3 < XOR) && (XOR < Max_Result))
			{
				Max3 = XOR;
            }
		}
		i++;
		j++;
	}
	printf("%i\n%i\n%i\n",Max1,Max2,Max3);
	return 0;
}
