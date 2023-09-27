//
#include<stdio.h>
#include<stdbool.h>

int SumFactors(int iNo)
{
    int iCnt = 0 ;
    int iSum = 0 ;
    
    if(iNo < 0)    //Updater
    {
       iNo = -iNo ;
    }

    for(iCnt = 1 ; iCnt <= (iNo/2) ; iCnt++ )
    {
       if((iNo % iCnt) ==0)
       {
           iSum = iSum + iCnt ;
       }
    }
    return iSum ;
}




int main()
{
   int iValue = 0 ;
   bool bRet = false ; 

   printf("Enter number :  \n"); 
   scanf("%d", &iValue);

   bRet = CheckPerfect(iValue);

   if(bRet == true)
   {
      printf("%d is a perfect number", iValue);
   }
   else
   {
      printf("%d is not a perfect number", iValue);
   }
   printf("Summetion of factors is : %d\n" , bRet ) ;

   return 0;
}