#include<iostream>
using namespace std ;

typedef unsigned int UINT ; 

bool CheckBit(UINT iNo )  //Unsigned 32 cha 32 bit can be used
{
    UINT iMask = 4 ;
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
     cout<<"3rd bit is ON"<<"\n";
   }
   else
   {
     cout<<"3rd bit is OFF"<<"\n";
   }
    return 0 ;
}

/*
//has to complete
No =       13
Binary   
            

*/