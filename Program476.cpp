#include<iostream>
using namespace std ;
//dynamic
template <class T>
class ArrayX
{
    public :
       T *Arr;  //
       int iSize;

       ArrayX(int);
       ~ArrayX();
       void Accept();
       void Display();
       
};

template <class T>
ArrayX<T> :: ArrayX(int iNo)
{
  this->iSize = iNo;
  this->Arr = new T(iSize);
}

template <class T>
ArrayX<T> :: ~ ArrayX()
{
  delete []Arr;
}

template <class T>
void ArrayX<T> :: Accept()
{
  cout<<"Enter the elements : \n";
  for(int iCnt = 0; iCnt < iSize ; iCnt++)
  {
    cin>>Arr[iCnt];
  }
}

template <class T>
void ArrayX<T> :: Display()
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
   //ArrayX <int>obj (iValue);
   ArrayX<int> *obj = new ArrayX<int>(iValue);

   obj->Accept();
   obj->Display();

   delete obj;

   cout<<"End of  main \n";

  return 0 ;
}