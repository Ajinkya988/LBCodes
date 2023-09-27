//

#include<stdio.h>


int strlenCapitalX(char str[])
{
   int iCount = 0 ;

   while(*str != '\0')
   {
      if((*str >= 'A') && (*str <= 'Z'))
      {
             iCount++ ;
      }
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

   iRet = strlenCapitalX(Arr);

   printf("Number of capital letters is : %d\n",iRet);

   return 0 ;
}