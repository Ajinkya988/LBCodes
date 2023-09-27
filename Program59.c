#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(int iNo , int iSearch)
{
   int iDigit = 0 ;
   
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
         break;
      } 
      iNo = iNo / 10 ;
   }
   if (iDigit == iSearch)
   {
      return true ;
   }
   else
   {
      return false ;
   }
}

int main()
{
    int iValue1 = 0 ; 
    int iValue2 = 0 ;
    bool bRet = false  ;
    printf( "Enter number : \n" );
    scanf("%d",&iValue1);

    printf( "Enter the digit (0 to 9) : \n" );
    scanf("%d",&iValue2);

    bRet = CheckDigit(iValue1 , iValue2);

    if(bRet == true)
    {
      printf("%d id present in %d\n" ,iValue2, iValue1);
    }
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

