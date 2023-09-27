#include<iostream>
using namespace std ;
//stucture generic asel tr typedef tayar krtaa yet nahi
template <class T>
struct NodeS
{
   int data;
   struct NodeS *next;
};

//
template <class T>                //generic
class SinglyLL
{
    public:
       struct NodeS<T> * first ;
       int iCount ;
   
   SinglyLL();
   
   void Display();
   int Count();

   void InsertFirst(T);
   void InsertLast(T);
   void InsertAtPos(T,int);
   
   void DeleteFirst();
   void DeleteLast();
   void DeleteAtPos(int);
};


int main()
{
  SinglyLL<int> obj1;

  return 0 ;
}