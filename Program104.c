///Pattern Printing 1st  day///
//Input : 7
//Output : A B C D E F

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = 'A' ;          // '\0' charater initialization

    for(iCnt = 1 ,ch = 'A' ; iCnt <= iNo ; iCnt++, ch++ )   //Updated(code rearrange)
                                                            //Companies
    {
        printf("%c\t", ch);  
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