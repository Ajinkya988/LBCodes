#include<iostream>
using namespace std ;
//Dynamic
//nth bit is ON or OFF 
typedef unsigned int UINT ; 

bool CheckBit(UINT iNo, UINT iPos )  
{
    UINT iMask = 0X00000001 ;   //Default
    UINT iResult = 0 ;
  
  if((iPos < 1 )||(iPos >32))
  {
    cout<<"Invalid position"<<"\n" ;
    return false ;
  }

   iMask = iMask << (iPos - 1);

    iResult = iNo & iMask ;
    if(iResult == iMask )
    {
        return true;
    } 
    else
    {
        return false ;
    }
}

int main()
{
   UINT iValue = 0 ;
   UINT iBit = 0;
   bool bRet = false ;

   cout<<"Enter number : "<<"\n";
   cin>>iValue ;
    
   cout<<"Enter the bit position (Range should be 1 to 32) : "<<"\n";
   cin>>iBit ;

   bRet = CheckBit(iValue,iBit);

   if(bRet == true)
   {
     cout<<" bit is ON"<<"\n";
   }
   else
   {
     cout<<" bit is OFF"<<"\n";
   }
    return 0 ;
}

/*
 
            

0000 0000 0000 0000 0000 0000 0000 0000 

0000 0000 0001 0000 0010 0000 0100 0000 
 
0    0     1     0   2     0    4    0

0X00102040
*/