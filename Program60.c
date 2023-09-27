#include<stdio.h>
#include<stdbool.h>

bool CountDigitFrequency(int iNo , int iSearch)
{
   int iDigit = 0 ;
   int iCount = 0 ;
   
   if((iSearch < 0 )|| (iSearch > 9))
   {
      printf("Enter the digit in range 0 to 9\n");
      return false ;
   }
   if(iNo < 0)
   {
      iNo = -iNo;
   }

   while(iNo != 0)
   {
      iDigit = iNo % 10 ;
      if(iDigit == iSearch)
      {
         iCount++ ;
      } 
      iNo = iNo / 10 ;
   }
   return iCount ;
   
}

int main()
{
    int iValue1 = 0 ; 
    int iValue2 = 0 ;
    int iRet = 0  ;

    printf( "Enter number : \n" );
    scanf("%d",&iValue1);

    printf( "Enter the digit (0 to 9) : \n" );
    scanf("%d",&iValue2);

    iRet = CountDigitFrequency(iValue1 , iValue2 );

    printf(" Frequency of %d is in %d is  %d\n" , iValue2 , iValue1 , iRet) ;

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

