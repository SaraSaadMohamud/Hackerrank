/*
 ============================================================================
 Name        : Conditional.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Given a positive integer then  print the lowercase English word corresponding to the number
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

    if(Number > 9)
    {
    	printf("Greater than 9\n");
    }
    else
    {
    	if(Number == 0)
    	{
    		printf("zero\n");
    	}
    	else if (Number == 1)
    	{
    		printf("one\n");
    	}
    	else if (Number == 2)
    	{
    	    printf("two\n");
    	}
    	else if (Number == 3)
    	{
    		printf("tree\n");
    	}
    	else if (Number == 4)
    	{
    		printf("four\n");
    	}
    	else if (Number == 5)
    	{
    		printf("five\n");
    	}
    	else if(Number == 6)
    	{
    		printf("six\n");
    	}
    	else if (Number == 7)
    	{
    		printf("seven\n");
    	}
    	else if (Number == 8)
    	{
    		printf("eight\n");
    	}
    	else
    	{
    		printf("nine\n");
    	}
    }
	return 0;
}
