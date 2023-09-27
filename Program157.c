//



#include<stdio.h>


int main()
{
   char Arr[10];

  printf("Enter your name : \n");
  scanf("%[^'\n']s",Arr); //space accepted  //8:49AM//
  //input ghe toparyant 

  printf("Your name is : %s\n",Arr);

   return 0 ;
}