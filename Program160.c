//

#include<stdio.h>

int strlenX(char str[])
{
   
}

int main()
{
   char Arr[10];
   int iRet = 0 ;
  
   printf("Enter String : %s\n",Arr);
   scanf("%[^'\n']s",Arr);

   iRet = strlen(Arr);   //strlenX(100)

   printf("Length of string is : %d\n",iRet);

   return 0 ;
}