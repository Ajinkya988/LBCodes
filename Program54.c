#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(int iNo)
{
   int iDigit = 0 ;

   while(iNo != 0)
   {
       iDigit = iNo % 10 ;
       if(iDigit == 8 )
       {
           break; 
       } 
       iNo = iNo / 10 ;
   }

   if(iDigit == 8)
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
    bool bRet = false ;

    printf( "Enter number : \n" );
    scanf("%d",&iValue);

    bRet = CheckDigit(iValue);

    if(bRet==true)
    {
        printf("Digit 8 is present in number\n");
    }
    else
    {
        printf("Digit 8 is not present in number\n");
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

