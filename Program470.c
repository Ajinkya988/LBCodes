#include <stdio.h>
//inp- 6785
//ou
//recu
void Factors(int iNo)
{
    int iCnt = 1;
    while(iCnt <= iNo/2)
    {
      if((iNo % iCnt) == 0)
      {
        //logic
      }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements : \n");
    scanf("%d",iValue);

    Factors(iValue);

    return 0;
}