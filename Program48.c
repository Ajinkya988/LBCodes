#include<stdio.h>
//
int CountDigits(int iNo )
{
  int iDigit = 0 ;
  int iCnt = 0 ;

  while(iNo != 0 )
  {
     iDigit = iNo % 10 ;    
     iCnt ++;  
     iNo = iNo / 10 ; 
  }
}

int main()
{
   int iValue = 0 ;
   int iRet = 0;

   printf("Enter number \n");
   scanf("%d", &iValue);

   iRet = CountDigits(iValue);
   
   printf("Number of digits are %d", iRet );

   return 0 ;
}