#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char String[1000];
    gets(String);

    int Lenght= strlen(String);
    int Array[10]={0,0,0,0,0,0,0,0,0,0};

    for(int i=0 ; i<Lenght ; i++)
    {
      if(String[i] == '0')
      {
          Array[0]++;
      }
      else if(String[i] == '1')
      {
          Array[1]++;
      }
       else if(String[i] =='2')
      {
          Array[2]++;
      }
       else if(String[i] == '3')
      {
          Array[3]++;
      }
       else if(String[i] == '4')
      {
          Array[4]++;
      }
       else if(String[i] == '5')
      {
          Array[5]++;
      }
       else if(String[i] == '6')
      {
          Array[6]++;
      }
       else if(String[i] == '7')
      {
          Array[7]++;
      }
       else if(String[i] == '8')
      {
          Array[8]++;
      }
       else if(String[i] == '9')
      {
          Array[9]++;
      }
    }
    for(int i=0 ; i<10 ;i++)
    {
        printf("%i ",Array[i]);
    }
    return 0;
}
