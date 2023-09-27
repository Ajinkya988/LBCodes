
#include<stdio.h>

void Display(int iNo)
{
     int iCnt = 0 ;

 if (iNo < 0)    //Updator for negative input
 {
  iNo = -iNo ;
 }
}
         
int main()
{
   int iValue = 0 ;

   printf("Enter the frequency : \n");
   scanf("%d ", &iValue);

   Display(iValue);

  return 0 ;
}