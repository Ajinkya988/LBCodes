///Pattern Printing 1st ///

//Input : 7
//Output : 0 1 2 3 4 5 6 

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt= 1 ; iCnt <= iNo ; iCnt++ )  //starting point is 1
    {
        printf("%d\t", iCnt-1);  
    }
    printf("\n");   
}

int main()
{   
    int iFrequency = 0 ;

    printf("Enter the frequency of symbol : \n");
    scanf("%d" , &iFrequency);

    Display(iFrequency);

    return 0 ;
}