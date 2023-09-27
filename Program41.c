#include<stdio.h>
//using typedef

typedef unsigned long int UFT ;

UFT Factorial (int iNo)
{
   UFT iFact = 1;
   int iCnt = 0 ;

   for(iCnt=iNo ;iCnt >= 1 ; iCnt--)
   {
      iFact = iFact * iCnt ;
   }
   return iFact ;
}


int main()
{
   int iValue = 0 ;
   UFT iRet = 0 ;

   printf("Enter number :  \n") ;
   scanf ("%ld", &iValue);

   iRet = Factorial(iValue);

  printf("Result is : %d\n",iRet);

   return 0 ;
}

