//



#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(char cValue)
{
   if ((cValue >= '0') && (cValue <= '9'))  // A=65 ; Z = 90;
   {
      return true;
   }
   else
   {
      return false;
   }
}

int main()
{
   char ch = '\0';
   bool bRet = false ;

   printf("Enter character : \n");
   scanf("%c",&ch);

   bRet = CheckDigit(ch);

   if(bRet == true)
   {
      printf("%c is a digit \n");
   }
   else
   {
      printf("%c is not a digit \n");
   }


   return 0 ;
}