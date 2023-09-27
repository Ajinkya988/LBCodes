#include<stdio.h>   //IO
#include<stdlib.h>   //Memory management

int main()           //Entry point function
{ 
   int iSize = 0 ;   // To store size of array 
   int *ptr = NULL ; //To store Address of Array
   int iCnt = 0 ;
   
   //Step1 : Accept the number of elements from user
   printf("Entern number of elements : \n");
   scanf("%d", &iSize);  
   
   //Step2 : Allocate memory dynamically
   ptr = (int *)malloc(iSize * sizeof(int)) ;

   //Step3 : Accept the values from user
   printf("Enter the Elements : \n");
   for (iCnt = 0 ; iCnt < iSize; iCnt++)
   {
       scanf("%d\n",&ptr[iCnt]);
   }

   printf("Elements of array are : \n");
   for (iCnt = 0 ; iCnt < iSize; iCnt++)
   {
       printf("%d\n",ptr[iCnt]);
   }
   
   return 0 ;         //Return suceess to OS

}