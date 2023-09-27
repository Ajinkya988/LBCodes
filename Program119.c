///Pattern Printing 1st  day//Non linear pattern
//change column wise
/*
   Input :
   Rows : 4
   Column : 5

   Output-
   # # # # #
   * * * * *
   # # # # #
   * * * * *
*/

#include<stdio.h>

void Display(int iRow , int iCol)
{
   int i = 0 ;
   int j = 0 ;
   
   for(i = 1 ; i <= iRow ; i++) // iRow % 2 == 0 
   { 
     for(j = 1 ; j <= iCol ; j++)
     {
         if((i % 2) == 0  ) 
         {
            printf("*\t");
         }
         else
         {
            printf("#\t");
         }
     }
     printf("\n");
   }  
    
}

int main()
{   
    int iValue1 = 0 , iValue2 = 0 ;

    printf("Enter number of rows : \n");
    scanf("%d", &iValue1);

    printf("Enter number of columns : \n");
    scanf("%d", &iValue2);

    Display(iValue1 , iValue2 );

    return 0 ;
}