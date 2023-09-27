//Check whether Given string is Palindrome or not
//Without flag
#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(char *str)
{
    char *start = NULL ;
    char *end = NULL ;

    start = str ;
    end = str ;

    while(*end != '\0')
    {
       end++;
    }
    end--;

    if(start < end)
    {
        return false ;
    }
    else
    {
        return true;
    }
    
}

int main()
{
   char Arr[20];
   bool bRet = false ;

   printf("Enter string: \n");
   scanf("%[^'\n]s",Arr);

   bRet = CheckPallindrome(Arr);

   if(bRet == true)
   {
    printf("string is pallindrome\n");
   }
   else
   {
    printf("string is not a pallindrome\n");
   }
   return 0 ;

}