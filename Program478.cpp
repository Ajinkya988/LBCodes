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
       bool LinearSearch(T);
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

template <class T>
bool ArrayX<T> :: LinearSearch(T No)
{
   bool flag = false ;

   for(int iCnt = 0; iCnt < iSize ; iCnt++)
   {
       if(Arr[iCnt] == No)
       {
          flag = true;
          break;
       }
   }
   return flag;
}

int main()
{
   int iValue = 0;
   bool bRet = false ;

   cout<<"Inside main \n";

   cout<<"Enter the size of aaratt : \n";
   cin>>iValue ;
   //ArrayX <int>obj (iValue);
   ArrayX<int> *obj = new ArrayX<int>(iValue);

   obj->Accept();
   obj->Display();

   cout<<"Enter the element you want to search\n";
   cin>>iValue;

   bRet = obj->LinearSearch(iValue);
   if(bRet == true)
   {
      cout<<iValue<<" is present in array\n";
   }
   else
   {
      cout<<iValue<<" is not present in array\n";
   }

   delete obj;

   cout<<"End of  main \n";

  return 0 ;
}