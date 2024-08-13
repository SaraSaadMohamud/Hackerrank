/*
 ============================================================================
 Name        : Function_To_Sum_And_Sub_WIthout_Retuern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : C Code to MAke A function that add and Subtract two Numbers without return any thing
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void Update_Fun(int *ptr1 , int *ptr2);
int main(void)
{
	int Num1 ,Num2;
	fflush(stdin);
	fflush(stdout);
	scanf("%i %i",&Num1 ,&Num2);

	Update_Fun(&Num1,&Num2);
	printf("%i\n%i\n",Num1 ,Num2);
	return 0;
}
void Update_Fun(int *ptr1 , int *ptr2)
{
	int Temp = *ptr1;
	*ptr1 = *ptr1 + *ptr2;
	*ptr2 = *ptr2 - Temp;

	if((*ptr2 ) < 0)
	{
		*ptr2 = *ptr2 * -1 ;
	}
}
