
#include<stdio.h>

void Display(int iNo)
{
     int iCnt = 0 ;
 if (iNo < 0)
 {
  printf ("Error : Invalid input . \n");
  printf( "Note : please enter positive number");
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