#include<stdio.h>  
#define ERR_NOTFOUND -1 

void Frequency(char *str)
{
   int iSmallCnt = 0 ;
   int iCapCnt = 0 ;
     
while (*str != '\0')
 {
          
     if((*str >= 'a') && (*str <= 'z'))
     {
         iSmallCnt++ ;
     }
     else if((*str >= 'A') && (*str <= 'Z'))
     {
        iCapCnt++;
     }
     str++;
 }
    printf("Number of small is :%d\n",iSmallCnt);
    printf("Number of capital is :%d\n",iCapCnt);
    
}

int main()
{
   char Arr[20];
   printf("Enter string : \n");
   scanf("%[^'\n']s",Arr);
   
   Frequency(Arr);

   return 0 ;
}