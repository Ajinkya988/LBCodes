//Accept decimal number from user and display its corresponding BINARY
using namespace std ;

#include<iostream>

void DisplayBinary(int iNo)
{
    int iDigit = 0 ;

    while(iNo != 0 )
    {
        iDigit = iNo % 2 ;
        cout<<iDigit ;
        iNo = iNo / 2 ;
    }
    cout<<"\n";
}

int main()
{
   int iValue = 0 ;

   cout<<"Enter number : "<<"\n";
   cin>>iValue ;

   DisplayBinary(iValue);

    return 0 ;
}

/*
No1 = 73
No2 = 98

No1 = 1  0  0  1  0  0  1
No2 = 1  1  0  0  0  1  0
-----------------------------
&     1  0  0  0  0  0  0      (64)

No1 = 1  0  0  1  0  0  1
No2 = 1  1  0  0  0  1  0
-----------------------------
|     1  1  0  1  0  1  1      (107)

No1 = 1  0  0  1  0  0  1
No2 = 1  1  0  0  0  1  0
-----------------------------
^     0  1  0  1  0  1  1      (43)

*/