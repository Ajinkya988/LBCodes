#include <stdio.h>
//inp- 6785
//ou
//
void FactorsR(int iNo)
{
    static int iCnt = 1;
    while(iCnt <= iNo/2)
    {
      if((iNo % iCnt) == 0)
      {
        printf("%d\t",iCnt);
      }
      iCnt++;
      FactorsR(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements : \n");
    scanf("%d",iValue);

    FactorsR(iValue);

    return 0;
}