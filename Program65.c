#include<stdio.h>
#include<stdbool.h>
//Partially Completed
//Palindrom number or not 

int ReverseNumber(int iNo )
{
   int iDigit = 0 ;
   int iReverse = 0 ;
   int iTemp = iNo ;

   while(iNo != 0 )
   {
      iDigit = iNo % 10 ;
      iReverse = (iReverse * 10) + iDigit ;  //imp
      iNo = iNo / 10 ;
   }
   if(iReverse = iNo)
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
    int iValue = 0 ;
    bool bRet = 0  ;

    printf( "Enter number : \n" );
    scanf("%d",&iValue);

    bRet = ReverseNumber(iValue);

    if (bRet== true)
    {
      printf(" %d is not a pallindrome number\n ");
    }
    if (bRet== false)
    {
      printf(" %d is a pallindrome number\n ");
    }

   return 0;
}





