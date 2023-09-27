///Pattern Printing 1st ///

//Input : 7
//Output : 0 1 2 3 4 5 6 

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt= 0 ; iCnt < iNo ; iCnt++ ) 
    {
        printf("%d\t", iCnt);  
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