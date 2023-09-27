#include<stdio.h>
#include<stdbool.h>
//incomplete
bool CountOddDigit(int iNo )
{
   int iCount = 0 ;
   int iDigit = 0 ;

   if(iNo < 0)
   {
      iNo = -iNo ;
   }
    
   while(iNo != 0)
   {
      iDigit = iNo % 10 ;
      if((iDigit % 2) != 0)
      {
         iCount++ ;
      }
      iNo = iNo / 10 ;
   }
  return iCount ;   
}

int main()
{
    int iValue = 0 ;
    int iRet = 0  ;

    printf( "Enter number : \n" );
    scanf("%d",&iValue);

    iRet = CountOddDigit(iValue);

    printf(" Frequency of odd digits in %d is in %d is  %d\n" , iValue, iRet) ;

    return 0;
}






/*
iNo = 761;

iDigit = iNo % 10       1
iNo = iNo / 10          76

iDigit = iNo % 10       6
iNo = iNo / 10          7

iDigit = iNo % 10       7
iNo = iNo / 10          0

*/

