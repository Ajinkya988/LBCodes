//Accept number and off 7th bit
//Dynamic of previous program
#include<iostream>
using namespace std ;
//
typedef unsigned int UINT ; 

UINT OffBit(UINT iNo, UINT iPos)  
{
    UINT iMask = 0X00000001 ;
    UINT iResult = 0 ;

    iMask = iMask << (iPos - 1);
    iMask = ~iMask ;           
    
    iResult = iNo & iMask ;
    return iResult ;
}

int main()
{
   UINT iValue = 0 ;
   UINT iBit = 0 ;
   UINT iRet = 0 ;

   cout<<"Enter number : "<<"\n";
   cin>>iValue ;
    
   cout<<"Enter the position :"<<"\n";
   cin>>iBit ;

   iRet = OffBit(iValue,iBit);

   cout<<"Result is : "<<iRet<<"\n" ;
    
  return 0 ;

}

/*
 
            


*/