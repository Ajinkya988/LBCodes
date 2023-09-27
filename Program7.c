#include<stdio.h>       //for printf and scanf
#include<stdbool.h>     //for bool data type
 
/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Ch
//  Input :         Integer
//  Output :        Boolean
//  Description :   Checks whether input is even or odd
//  Author :        Ajinkya Prakashrao Kaje
//  Date :          25/04/2023
/////////////////////////////////////////////////////////////////////////////////

bool CheckDivisible (int iNo)
{
     if (((iNo % 3)==0) && ((iNo % 5 )==0))
     {
            return true ;
     }
     else
     {
            return false ;
     }
    
}

///////////////////////////////////////////////////////////////////
//Entry Point function
//////////////////////////////////////////////////////////////////

int main()
{
   int iValue = 0;       //Variable to accept input
   bool bRet = false;    //Variable to accept return value

   printf("Please enter number to check if it is divisible by 3 and 5 : \n");
   scanf("%d" , &iValue);

   bRet = CheckDivisible (iValue);   // Function call

   if (bRet == true)
   {
       printf("%d is completely divisible by 3 and 5  \n ", iValue);
   }
   else
   {
       printf("%d is not completely divisible by 3 and 5  \n ", iValue);
   }
   return 0 ;
}

/* 
   1 :Logical AND &&

   2 :Logical OR ||

     exp1        exp2        &&   ||
      t           t           t    t
      t           f           f    t
      f           f           f    f
      f           t           f    t

*/