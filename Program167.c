//Count the number of
//Compl
#include<stdio.h>

int CountChar(char *str)
{
   int iCount = 0 ;

   while(*str != '\0')
   {
      if(*str == 'z' )
      {
         iCount++ ;
      }
       str++ ;
   }
   
   return iCount;
}
int main()
{
   char Arr[20];
   int iRet = 0 ;
  
   printf("Enter String : %s\n",Arr);
   scanf("%[^'\n']s",Arr);

   iRet = CountChar(Arr);

   printf("Number of Spaces are : %d\n",iRet);

   return 0 ;
}