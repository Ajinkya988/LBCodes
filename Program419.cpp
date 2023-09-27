#include<iostream>
using namespace std ;

template <class T> // tempate header // T -Template variable or argument

T Addition(T No1, T No2)
{
   T Ans;     //because answer is not defined
   Ans = No1 + No2 ;
   return Ans;
}

int main()
{
  int A = 10 , B = 11, Ret = 0;
  Ret = Addition(A,B);
  cout<<"Addition is : "<<Ret<<"\n";

  double X = 79.3 , Y = 90.3, Result = 0;
  Result = Addition(X,Y);
  cout<<"Addition is : "<<Result<<"\n";

  float L = 70.3f , M = 90.3f, Resultf = 0.0f;
  Resultf = Addition(L,M);
  cout<<"Addition is : "<<Resultf<<"\n";

  return 0 ;
}