// InterView
//Small to capital
//StrlwrX - String lowerS
#include<stdio.h>   

void StrlwrX(char *str)
{
   while(*str !='\0')
   {
      if((*str >= 'A') && (*str <= 'Z'))
      {
          *str = *str + 32 ;   
      }
      
      str++ ;
   }  
}

int main()
{
   char Arr[20];
   printf("Enter string : \n");
   scanf("%[^'\n']s",Arr);
   
   StrlwrX(Arr);

   printf("String after editing is : %s\n",Arr);

   return 0 ;
}