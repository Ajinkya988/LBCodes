///Pattern Printing //Non linear pattern
//OpTIMIZEDDDDD /////////////
/*
   Input :
   Rows : 4
   Column : 4

   Output-
   * * * *
   * * *
   * * 
   * 
    
*/
//incomplete
#include<stdio.h>

void Display(int iRow , int iCol)
{
   int i = 0 ;
   int j = 0 ;
  

   if (iRow != iCol)
   {
      printf("Invalid input \n");
      return ;
   }

   for(i = iRow ;  i >= 1; i-- )    //outer // 4 3 2 1 
   { 
      for( j = 1 ; j <= i ; j++)     // inner
     {       
        {
           printf("*\t");
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