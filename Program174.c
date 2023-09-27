#include<stdio.h>   //Time complexity is always N
#define ERR_NOTFOUND -1 

int LastOccurance(char *str , char cValue)
{
   int iCnt = 1 ;
   int iPos = 0 ;

   while(*str != '\0')
   {
      if(*str == cValue)
      {
         iPos = iCnt ;
      }
      str++;
      iCnt++;
   }
  return iPos ;
}

int main()
{
   char Arr[20];
   char ch = '\0';
   int iRet = 0 ;

   printf("Enter string : \n");
   scanf("%[^'\n']s",Arr);

   printf("Enter the character : \n");
   scanf(" %c",&ch);

   iRet = LastOccurance(Arr,ch);  //Arr - Call by address
                                   // ch - Call by character
   if(iRet == ERR_NOTFOUND )
   {
      printf("There is no such character \n");
   }
   else
   {
      printf("Last occurance of that character is at : %d\n",iRet);
   }
   
   return 0 ;
}