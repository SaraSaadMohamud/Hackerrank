/*
 ============================================================================
 Name        : For.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : For each integer in the interval (given as an input )
               If(1<= n <= 9), then print the English representation of it in lowercase.
               Else if (n >9), and it is an even number, then print "even".
               Else if (n >9), and it is an odd number, then print "odd".
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int Num1 ,Num2;
	fflush(stdin);
	fflush(stdout);
	scanf("%i %i",&Num1,&Num2);

	for(int i= Num1 ; i<= Num2 ; i++)
	{
		if(i > 9)
		{
			if(i % 2 == 0)
			{
				printf("even\n");
			}
			else
			{
				printf("odd\n");
			}
		}
		else
		{
			       if (i == 1)
			    	{
			    		printf("one\n");
			    	}
			    	else if (i == 2)
			    	{
			    	    printf("two\n");
			    	}
			    	else if (i == 3)
			    	{
			    		printf("three\n");
			    	}
			    	else if (i == 4)
			    	{
			    		printf("four\n");
			    	}
			    	else if (i == 5)
			    	{
			    		printf("five\n");
			    	}
			    	else if(i == 6)
			    	{
			    		printf("six\n");
			    	}
			    	else if (i == 7)
			    	{
			    		printf("seven\n");
			    	}
			    	else if (i == 8)
			    	{
			    		printf("eight\n");
			    	}
			    	else
			    	{
			    		printf("nine\n");
			    	}
		}
	}
	return 0;
}
