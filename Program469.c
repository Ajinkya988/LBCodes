#include <stdio.h>
//inp- 6785
//ou
//recu
int SumR(int iNo)
{
    int iDigit = 0;
    static  iSum = 0;

    if(iNo != 0)
    {
       iDigit = iNo % 10;
       iSum = iSum + iDigit ;
       iNo = iNo / 10 ;
       SumR(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d",iValue);

    iRet = SumR(iValue);
    printf("Addition of digits : %d\n",iRet);

    return 0;
}