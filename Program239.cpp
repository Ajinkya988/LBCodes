#include<iostream>
using namespace std ;

typedef unsigned int UINT ; 

bool CheckBit(UINT iNo )  
{
    UINT iMask = 0X00102040 ;  //Good
    UINT iResult = 0 ;
  
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
   bool bRet = false ;

   cout<<"Enter number : "<<"\n";
   cin>>iValue ;

   bRet = CheckBit(iValue);

   if(bRet == true)
   {
     cout<<"7,14,21 bits are ON"<<"\n";
   }
   else
   {
     cout<<"7,14,21 bits are OFF"<<"\n";
   }
    return 0 ;
}

/*
 
            

0000 0000 0000 0000 0000 0000 0000 0000 

0000 0000 0001 0000 0010 0000 0100 0000 
 
0    0     1     0   2     0    4    0

0X00102040
*/