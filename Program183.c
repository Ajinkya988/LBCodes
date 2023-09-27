// InterView

#include<stdio.h>   

void strcpyX(char *src , char *dest)
{
   while(*src != '\0')
   {
     *dest = *src ;
     src++ ;
     dest++ ;
   }
   *dest = '\0';  //Most important
}

int main()
{
   char Arr[20];
   char Brr[20] ;

   printf("Enter string : \n");
   scanf("%[^'\n']s",Arr);
   
   strcpyX(Arr,Brr);;

   printf("String after editing is : %s\n",Brr);

   return 0 ;
}