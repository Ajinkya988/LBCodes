//
#include<iostream>
using namespace std ;
//
typedef unsigned int UINT ; 
// 1111 1111 1111 1111 1111 1111 1011 1111
// F    F    F    F    F    F    B    F

UINT OffBit(UINT iNo)  
{
    UINT iMask = 0XFFFFFFBF ;
    UINT iResult = 0 ;
    
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
    
   iRet = OffBit(iValue);

   cout<<"Result is : "<<iRet<<"\n" ;
    
  return 0 ;

}

/*
 
            


*/