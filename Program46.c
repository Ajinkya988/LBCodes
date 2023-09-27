#include<stdio.h>
//Calculate power
//in While loop
int CalculatePower (int iBase , int iPower)
{
   int iCnt = 0 ;
   int iResult = 1 ;
   iCnt = 1 ;
   while ( iCnt <= iPower )
   {
      iResult = iResult * iBase ;    // until iPower done
      iCnt++    ;
   }
   return iResult ;
}

int main()
{
   int iValue1 = 0 ;
   int iValue2 = 0 ;
   int iRet = 0 ;

   printf("Enter base :  \n") ;
   scanf ("%d", &iValue1);

   printf("Enter power :  \n") ;
   scanf ("%d", &iValue2);
 
   iRet = CalculatePower(iValue1 ,iValue2);

   printf("Result is : %d\n", iRet); 

   return 0 ;
}