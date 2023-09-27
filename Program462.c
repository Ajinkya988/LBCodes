#include <stdio.h>
//inp- 4
//out- 1 2 3 4
void DisplayI(int iNo)
{
    int iCnt = 1;

    if(iCnt <= iNo)
    {
        printf("%d\t",iCnt);
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements : \n");
    scanf("%d",iValue);

    DisplayI(iValue);

    printf("End of main\n");

    return 0;
}