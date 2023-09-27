// InterView
//Incomplete
#include<stdio.h>   

void strcpyX(char *src , char *dest ,int iLength)
{
   while((*src != '\0') && (iLength != 0))
   {
     *dest = *src ;
     src++ ;
     dest++ ;
     iLength--;
   }
   *dest = '\0'; 
}

int main()
{
   char Arr[20];
   char Brr[20] ;
   int iNo = 0 ;

   printf("Enter string : \n");
   scanf("%[^'\n']s",Arr);
   
   printf("Enter the no of charcters that you want to copy\n");
   scanf("%d",iNo);

   strcpyX(Arr,Brr,iNo);

   printf("String after editing is : %s\n",Brr);

   return 0 ;
}