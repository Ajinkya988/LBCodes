#include<iostream>
using namespace std ;
//generic prbms on n numbers

void Display(int Arr[], int Size)
{
  int iCnt = 0 ;

  for(iCnt= 0; iCnt < Size; iCnt++)
  {
     cout<<Arr[iCnt]<<"\n";
  }
}

void Display(double Arr[], int Size)
{
  int iCnt = 0 ;

  for(iCnt= 0; iCnt < Size; iCnt++)
  {
     cout<<Arr[iCnt]<<"\n";
  }
}

int main()
{
   int A[]= {10 , 20, 30, 40, 50};
   Display(A,5);

   double B[]= {10.44 , 20.55, 30.66, 40.77, 50.88};
   Display(B,5);

  return 0 ;
}