
#include<iostream>
using namespace std ;

class Array
{
   public:
   int iSize ;
   int *Arr ;
   
   Array(int iNo )
   {
      iSize = iNo ;
      Arr  = new int[iSize] ;
   }

   ~Array()
   {
      delete []Arr;
   }
   
   void Accept()
   {

     cout<<"Enter the Elements : "<<"\n" ;

     int iCnt = 0 ;
     for(iCnt = 0 ;iCnt < iSize ; iCnt++)
     {
        cin>>Arr[iCnt];
     }
     
   }

   void Display()
   {

    cout<<"Elements of the Array are : "<<"\n";

    int iCnt = 0 ;
    for (iCnt= 0 ;iCnt < iSize ; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
   }

   int Summation()
   {

      int iSum = 0 ;
      int iCnt = 0 ;
      for(iCnt = 0; iCnt <iSize ;iCnt++)
      {
         iSum = iSum + Arr[iCnt];
      }
      return iSum ;
   }
};

int main()
{ 
    cout<<"Inside main"<<"\n";

    int iNo = 0 ;
    int iRet = 0 ;

    cout<<"Enter number of Elements : "<<"\n";
    cin>>iNo;
    
    Array aobj (iNo);
    aobj.Accept();
    aobj.Display();

    iRet = aobj.Summation();

    cout<<"Summation is : "<<iRet<<"\n";

   return 0 ;
}