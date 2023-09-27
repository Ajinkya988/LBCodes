///Pattern Printing //Non linear pattern
//OpTIMIZEDDDDD /////////////
/*
   Input :
   Rows : 6
   Column : 6

   Output-
  * a a a a a 
  b * * * * * 
*/
//incomplete
#include<stdio.h>

void Display(int iRow , int iCol)
{
   int i = 0 ;
   int j = 0 ;
  char ch = '\0';

   if (iRow != iCol)
   {
      printf("Invalid input \n");
      return ;
   }

   for(i = 1 , ch = 'a';  i <= iRow ; i++ , ch++) 
   { 
     for(j = 1  ;  j <= iCol ; j++)     
     {     
        if( i = j)
        {
           printf("*\t");
        }  
        else
        {
           printf("%c\t",ch);
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