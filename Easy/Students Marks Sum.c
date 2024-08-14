#include <stdio.h>
#include <stdlib.h>
int marks_summation(int marks[], int number_of_students, char gender);

int main()
{
    int Index,Result ;
    scanf("%i",&Index);

    int Marks[Index];
    char Gender;
    for(int i=0 ; i<Index ; i++)
    {
        scanf("%i",&Marks[i]);
    }
    fflush(stdin);
    scanf("%c",&Gender);
    Result = marks_summation(Marks,Index,Gender);
    printf("%i\n",Result);
    return 0;
}
int marks_summation(int marks[], int number_of_students, char gender)
{
    int Sum=0;
    if(gender == 'b')
    {
        for(int i=0 ; i<number_of_students ; i+=2)
        {
            Sum += marks[i];
        }
    }
    else if (gender == 'g')
    {
        for(int i=1 ; i<number_of_students ; i+=2)
        {
            Sum += marks[i];
        }
    }
        return(Sum);
}
