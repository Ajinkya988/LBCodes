#include<stdio.h>

void DisplayFactors(int iNo)   //void - returning nothing
{
    int iCnt = 0 ;
    //     1           2             3
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)  // logic
    {
      printf("%d\n", iCnt);
    }
}

int main()
{ 
  int iValue = 0 ;          // = 0 - To avoid garbage
  
  printf("Enter number : \n");
  scanf ("%d" , &iValue ) ;

  DisplayFactors(iValue);        //function call
                       //iValue - local variable (accessible only in main function)
  return 0 ;
}


