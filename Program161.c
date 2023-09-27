//

#include<stdio.h>
#include<string.h>

int strlenX(char str[])
{
   int iCount = 0 ;

   while(*str != '\0')
   {
      iCount++ ;
      str++ ;
   }
   return iCount;
}
//str la pudhe nyaaychay joparyant \0 yet nahi
int main()
{
   char Arr[10];
   int iRet = 0 ;
  
   printf("Enter String : %s\n",Arr);
   scanf("%[^'\n']s",Arr);

   iRet = strlenX(Arr);

   printf("Length of string is : %d\n",iRet);

   return 0 ;
}