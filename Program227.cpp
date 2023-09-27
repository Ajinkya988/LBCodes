using namespace std ;
#include<iostream>

void DisplayBinary(int iNo1, int iNo2)
{
    int iResult = 0 ;
    
    iResult = iNo1 & iNo2 ;
    cout<<"Result of & is : "<<iResult<<"\n";

    iResult = iNo1 | iNo2 ;
    cout<<"Result of | is : "<<iResult<<"\n";

    iResult = iNo1 ^ iNo2 ;
    cout<<"Result of ^ is : "<<iResult<<"\n";

}

int main()
{
   int iValue1 = 0 , iValue2 = 0 ;

   cout<<"Enter first number : "<<"\n";
   cin>>iValue1 ;

   cout<<"Enter second number : "<<"\n";
   cin>>iValue2 ;

   DisplayBinary(iValue1,iValue2);

    return 0 ;
}

/*
Base     2    2    2    2    2    2    2    2    2    2    2    2  
Power    11   10   9    8    7    6    5    4    3    2    1    0 
Value  2048   1024 512  256  128  64   32   16   8    4    2    1                              
*/

/*
//Decimal No =   98
//Binary =       (0  1  1  0)  (0  0  1  0)
//Hexadecimal          6             2

                            0X62  //Six Two

Decimal No =   
Binary =       (0  0  1  1) (1  1  0  0)  (0  1  1  1)
Hexadecimal          3           C               7
                           0X3C7   // 12-C 13-D.....
//Recheck
Decimal No =   589
Binary =       (0  0  1  0) (1  1  0  0)  (1  0  0  1)
Hexadecimal                    
                            0X24d               
            

*/