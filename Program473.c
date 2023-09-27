#include <stdio.h>
//incomplete
void strlenR(char *str)
{
    int iCnt =0;

    while(*str != '\0')
    {
      iCnt++ ;
      str++;
    }
    return iCnt++ ;
}

int main()
{
    int iRet =0;
    char Arr[20];

    printf("Enter number of elements : \n");
    scanf("%[^'\n]",Arr);

    iRet= strlenR(Arr);

    return 0;
}