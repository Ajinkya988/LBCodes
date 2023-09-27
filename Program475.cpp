#include<iostream>
using namespace std ;
//dynamic
class ArrayX
{
    public :
       int *Arr;
       int iSize;

       ArrayX(int);
       ~ArrayX();
       void Accept();
       void Display();
};

ArrayX :: ArrayX(int iNo)
{
  this->iSize = iNo;
  this->Arr = new int(iSize);
}

ArrayX :: ~ ArrayX()
{
  delete []Arr;
}

void ArrayX :: Accept()
{
  cout<<"Enter the elements : \n";
  for(int iCnt = 0; iCnt < iSize ; iCnt++)
  {
    cin>>Arr[iCnt];
  }
}

void ArrayX :: Display()
{
  cout<<"Elements of Array are : \n";
  for(int iCnt = 0; iCnt < iSize ; iCnt++)
  {
    cout<<Arr[iCnt]<<"\t";
  }
  cout<<"\n";
}

int main()
{
   int iValue = 0;

   cout<<"Inside main \n";

   cout<<"Enter the size of aaratt : \n";
   cin>>iValue ;

   ArrayX *obj = new ArrayX(iValue);

   obj->Accept();
   obj->Display();

   delete obj;

   cout<<"End of  main \n";

  return 0 ;
}