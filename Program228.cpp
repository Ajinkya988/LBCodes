using namespace std ;
#include<iostream>

void DisplayHexadecimal(int iNo)
{
    int iDigit = 0 ;

    cout<<"Hexadecimal conversion of :"<<iNo<<" is :"<<"\n";

    while(iNo != 0 )
    {
        iDigit = iNo % 16 ;
        cout<<iDigit ;
        iNo = iNo / 16 ;
    }
    cout<<"\n";
}

int main()
{
   int iValue = 0 ;

   cout<<"Enter number : "<<"\n";
   cin>>iValue ;

   DisplayHexadecimal(iValue);

    return 0 ;
}

/*
Base     2    2    2    2    2    2    2    2    2    2    2    2  
Power    11   10   9    8    7    6    5    4    3    2    1    0 
Value  2048   1024 512  256  128  64   32   16   8    4    2    1                              
*/

/*


*/