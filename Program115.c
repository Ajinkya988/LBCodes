///Pattern Printing 1st  day//Non linear pattern
/*
   Input :
   Rows : 3
   Column : 5

   Output-
   1 2 3 4 5
   1 2 3 4 5
   1 2 3 4 5 
*/

#include<stdio.h>

void Display(int iRow , int iCol)
{
   int i = 0 ;
   int j = 0 ;
   
   for(i = 1 ; i <= iRow ; i++ )
   { 
     for(j = 1 ; j <= iCol ; j++)
     {
        printf("%d\t",j);         
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