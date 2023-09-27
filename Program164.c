//

#include<stdio.h>


int strlenDigitX(char str[])
{
   int iCount = 0 ;

   while(*str != '\0')
   {
      if((*str >= '0') && (*str <= '9'))
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

   iRet = strlenDigitX(Arr);

   printf("Number of digits is : %d\n",iRet);

   return 0 ;
}