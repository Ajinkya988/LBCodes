#include<iostream>
using namespace std ;
//generic prbms 

template <class T>
class ArrayX
{
  public:
     T *Arr;
     int Size ;

    ArrayX(int length);  
    void Accept();
    void Display();
     
};

template <class T>
ArrayX<T>::ArrayX(int length)
{
   Size = length;
   Arr = new T[Size];          ////////////
}

template <class T>
void ArrayX<T> :: Accept()
{
      cout<<"Enter the elements of Array:\n";
      int iCnt = 0;
      for(iCnt = 0; iCnt < Size ; iCnt++)
      {
        cin>>Arr[iCnt];
      }
}

template <class T>
void ArrayX<T> :: Display()
{
      cout<<"Elements of array are \n";
      int iCnt = 0;
      for(iCnt = 0; iCnt < Size ; iCnt++)
      {
        cout<<Arr[iCnt]<<"\n";
      }
}

int main()
{
  ArrayX<int> obj1(5);
  obj1.Accept();
  obj1.Display();

  ArrayX<double> obj2(5);
  obj2.Accept();
  obj2.Display();

  return 0 ;
}