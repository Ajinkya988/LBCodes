#include <stdio.h>
//inp- 4
//out- 1 2 3 4
void DisplayR(int iNo)
{
    static int iCnt = 1;

    while(iCnt <= iNo)
    {
        printf("%d\t",iCnt);
        iCnt++;
        DisplayR(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements : \n");
    scanf("%d",iValue);

    DisplayR(iValue);

    printf("End of main\n");

    return 0;
}