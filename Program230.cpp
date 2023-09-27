using namespace std ;

#include<iostream>

void DisplayHexadecimal(int iNo)
{
    int iDigit = 0 ;
    char Arr[] = {'A','B','C','D','E','F'};
    cout<<"Hexadecimal conversion of :"<<iNo<<" is :"<<"\n";

    while(iNo != 0 )
    {
        iDigit = iNo % 16 ;
        if (iDigit <= 9)
        {
            cout<<iDigit ;
        }
        else
        {
           cout<<Arr[iDigit - 10] ;
        }
        
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
//Decimal No =   98
//Binary =       (0  1  1  0)  (0  0  1  0)
//Hexadecimal          6             2

                            0X62  //Six Two

Decimal No =   
Binary =       (0  0  1  1) (1  1  0  0)  (0  1  1  1)
Hexadecimal          3           C               7
                           0X3C7
//Recheck
Decimal No =   589
Binary =       (0  0  1  0) (1  1  0  0)  (1  0  0  1)
Hexadecimal                    
                            0X24d               
            

*/