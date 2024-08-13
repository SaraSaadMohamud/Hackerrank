/*
 ============================================================================
 Name        : Sum_and_Difference_of_Two_Numbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Sum and Difference of Two Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int Num1,Num2,Sum1,Diff1;
	float Num3,Num4,Sum2,Diff2;

	fflush(stdin);
	fflush(stdout);
	scanf("%i %i",&Num1,&Num2);
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f",&Num3,&Num4);

	Sum1 = Num1 + Num2 ;
	Sum2 = Num3 + Num4 ;

	Diff1 = Num1 - Num2 ;
	Diff2 = Num3 - Num4;

	printf("%i %i\n",Sum1,Diff1);
	printf("%0.1f %0.1f \n",Sum2,Diff2);

	return 0;
}
