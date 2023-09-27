//



#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char cValue)
{
   if ((cValue >= 'a') && (cValue <= 'z'))  // A=65 ; Z = 90;
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

   bRet = CheckSmall(ch);

   if(bRet == true)
   {
      printf("%c is small Letter \n");
   }
   else
   {
      printf("%c is not small Letter \n");
   }


   return 0 ;
}