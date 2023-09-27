///Pattern Printing 1st ///

//Input : 7
//Output : A  A  A  A  A  A  A

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt= 1 ; iCnt<=iNo ; iCnt++ ) // starts from 1
    {
        printf("A\t");   // /t spacing
    }
    printf("\n");   //for next command
}

int main()
{   
    int iFrequency = 0 ;

    printf("Enter the frequency of symbol : \n");
    scanf("%d" , &iFrequency);

    Display(iFrequency);

    return 0 ;
}