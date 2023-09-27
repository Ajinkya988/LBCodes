#include<iostream>
using namespace std ;
//Sorting          //Efficient
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
       void InsertionSort();
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
void ArrayX<T> :: InsertionSort()
{
   int i = 0, j = 0 ;
   T selected ;       //Important

   for(i = 1; i < iSize ; i++)
   {             //1                                 //2                  //3
    for( j = i-1 , selected = Arr[i]; ((j >= 0) && (Arr[j] > selected)) ; j--)
    {
      Arr[j + 1] = Arr[j];  //4
    }
    Arr[j + 1] = selected ;
   }
}

int main()
{
   int iValue = 0;
   bool bRet = false ;

   cout<<"Enter the size of array : \n";
   cin>>iValue ;
   
   ArrayX<int> *obj = new ArrayX<int>(iValue);

   obj->Accept();
   obj->Display();

   obj->InsertionSort();

   cout<<"Data After Sorting is : \n";
   obj->Display();

   delete obj ;

  return 0 ;
}