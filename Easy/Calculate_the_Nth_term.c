#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=0;
    int Num1, Num2,Num3;
    scanf("%i",&count);
    scanf("%i %i %i",&Num1 ,&Num2 ,&Num3);
    int Array[count];
    int i=0;
      if(count == 3)
           {
                printf("%i",Num3);
                exit(0);
           }

    for(i= 0 ; i<count ; i++)
    {
        if(i<=2)
        {
           switch(i)
           {
              case 0 :
                Array[i]=Num1;
                break;
              case 1 :
                Array[i] = Num2 ;
                break;
              case 2 :
                Array[i]= Num3;
                break;

           }
        }
        else
        {
           Array[i] = Array[i-1] + Array[i-2] + Array[i-3];
        }
    }
    printf("%i",Array[count-1]);
    return 0;
}
