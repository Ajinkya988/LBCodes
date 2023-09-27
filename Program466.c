#include <stdio.h>
//inp- 6785
//out- 5  8  7  6
void DisplayR(int iNo)
{
    int iDigit = 0;
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\t",iNo%10);
        iNo = iNo / 10;
        DisplayR(iNo);             //Tail recursion
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements : \n");
    scanf("%d",iValue);

    DisplayR(iValue);

    return 0;
}