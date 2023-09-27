#include<stdio.h>   

void strncatX(char *src , char *dest, int iLength)
{
    
    //1 : Travel till end of dest
    while(*dest != '\0')
    {
      dest++;
    }
   
    //2 : Copy the data from src to dest
    while((*src != '\0') && (iLength != 0))  //updated //Better
    {
      *dest = *src ;
       dest++;
       src++;
       
       iLength--;
       
    }

    //3 : Write '\0' st end of theS dest
    *dest = '\0';
    
}

int main()
{
   char Arr[20];
   char Brr[20] = "Demo" ;
   int iNo = 0 ;

   printf("Enter string : \n");
   scanf("%[^'\n']s",Arr);
   
   printf("Enter tht number of letters that you want to Concate\n");
   scanf("%d",&iNo);

   strncatX(Arr, Brr,iNo);

   printf("String after editing is : %s\n",Brr);

   return 0 ;
}