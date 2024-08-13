/*
 ============================================================================
 Name        : Greatest_Number_of_Four_Numbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Function to get the Greatest_Number_of_Four_Numbers.c
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int Get_Largest_Fun(int a,int b , int c , int d);
int Num1,Num2,Num3,Num4;
int Result;
int main(void)
{
	fflush(stdin);
	fflush(stdout);
	scanf("%i %i %i %i",&Num1,&Num2,&Num3,&Num4);
	Result = Get_Largest_Fun(Num1,Num2 ,Num3,Num4);
	printf("%i",Result);
	return 0;
}
int Get_Largest_Fun(int a,int b , int c , int d)
{
	int Large=0;
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				Large = a;
			}
			else
			{
				Large = d;
			}
		}
		else
		{
			if(c>d)
			{
				Large = c;
			}
			else
			{
				Large = d;
			}
		}
	}
	else
	{
		if(b>c)
				{
					if(b>d)
					{
						Large = b;
					}
					else
					{
						Large = d;
					}
				}
		else
		{
			if(c>d)
			{
				Large = c;
			}
			else
			{
			    Large = d;
			}
		}
	}
	return(Large);
}
