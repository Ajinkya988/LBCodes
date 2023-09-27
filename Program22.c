 #include<stdio.h>

void DisplayFactors(int iNo)   //void - returning nothing
{
    int iCnt = 0 ;
    //     1           2             3
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)  // logic
    {
       if (iNo %  iCnt == 0)
       {
          printf ("%d \n", iCnt);
       }
    }
}

int main()
{ 
  int iValue = 0 ;          // = 0 - To avoid garbage
  
  printf("Enter number : \n");
  scanf ("%d" , &iValue ) ;

  DisplayFactors(iValue);        //function call
                       //iValue - local variable(accessible only in main function)
  return 0 ;
}

/*
//iNo = 8;

//iNo  % 1 == 0     // == comparison   , = assignment
//iNo  % 2 == 0
//iNo  % 3 == 0 
//iNo  % 4 == 0 
//iNo  % 5 == 0 
//iNo  % 6 == 0 
//iNo  % 7 == 0 
//iNo  % 8 == 0                            


for(iCnt=1 ; iCnt<=8(iNo - expected) ; iCnt++)
{
  if (iNo %  __iCnt__ == 0)
  { printf("%d", iCnt);}

}
*/
