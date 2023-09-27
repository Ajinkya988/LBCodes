//



#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char cValue)
{
   if ((cValue >= 65) && (cValue <= 90))
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

   bRet = CheckCapital(ch);

   if(bRet == true)
   {
      printf("%c is capital Letter \n");
   }
   else
   {
      printf("%c is not capital Letter \n");
   }


   return 0 ;
}