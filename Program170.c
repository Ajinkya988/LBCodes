//Count the number o

#include<stdio.h>
#include<stdlib.h>

int CountChar(char *str , char cValue)
{
   int iCount = 0 ;
   char r = '\0';

   while(*str != '\0')
   {
      if(*str == 'cValue' )
      {
         iCount++ ;
      }
       str++ ;
   }
   
   return iCount;
}
int main()
{
   char Arr[10];
   char ch = '\0';
   int iRet = 0 ;
  
   printf("Enter String : %s\n",Arr);
   scanf("%[^'\n']s",Arr);

   fflush(stdin);
   
   printf("Enter the character : \n");
   scanf("%c",&ch);  //enter gets flushed and remaining gets displayed

   iRet = CountChar(Arr,ch);

   printf("Number of occurances are : %d\n",iRet);

   return 0 ;
}