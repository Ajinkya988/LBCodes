#include<stdio.h>
#include<stdlib.h>   
//always n time complexity
#define  ERR_NOTFOUND -1 

int SearchLastOccurance(int Arr[] , int iLength , int iNo)
{
     int iCnt = 0 ;
     int iPos = 0 ;

     for(iCnt = 0 ; iCnt < iLength ; iCnt++ )
     {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
     }

     if(iCnt == iLength)
     {
         return ERR_NOTFOUND ;
     }
     else
     { 
        return iCnt ;
     }
}

int main()
{
    int iSize = 0 ;
    int *ptr = NULL ;
    int iCnt = 0 , iValue = 0 ,iRet =0;
  

    printf("Enter number of elements : \n");
    scanf("&d",&iSize);

    ptr = (int *)malloc (iSize * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
         scanf("%d" , &ptr[iCnt]);
    }

    printf("Enter the element that you want to search: \n");
    scanf("%d",&iValue);

    printf("Elements of the array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n", ptr[iCnt]);
    }

    
    SearchLastOccurance(ptr , iSize, iNo);
    free(ptr);

    return 0 ;

}

