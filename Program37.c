//factorial 

#include<stdio.h>

void DisplayF (int iNo)   //F - front
{
   int iCnt = 0;

   for(iCnt=1 ;iCnt<= iNo ; iCnt++)
   {
      printf("%d \t", iCnt);     //traversal 
   }
}

int main()
{
   int iValue = 0 ;
   
   printf("Enter number :  \n") ;
   scanf ("%d", &iValue);

   DisplayF (iValue);
   return 0 ;
}

/*
  iNo = 4;

  4! 

factorial = 5 * 4 * 3 * 2 * 1
factorial = 1 * 2 * 3 * 4 * 5

*/