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
template <class T>
struct NodeD
{
   int data;
   struct NodeD *next;
   struct NodeD *prev;
};

//
template <class T>                //generic
class SinglyLL
{
    public:
       struct NodeS<T> * first ;
       int iCount ;
};

//
template <class T>                //generic
class SinglyCL
{
   public:
       struct NodeS<T> * first ;
       struct NodeS<T> * last ;
       int iCount ;
};

//
template <class T>                //generic
class DoublyLL
{
    public:
       struct NodeS<T> * first ;
       int iCount ;
};

//
template <class T>                //generic
class DoublyLL
{
    public:
       struct NodeS<T> * first ;
       int iCount ;
};

//Logic of 32 functions

int main()
{
  SinglyLL<int> obj1;

  return 0 ;
}