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
template <class T>
class SinglyLL
{
    public:
        struct NodeS<T> * first;
        int iCount;

    SinglyLL();

    void Display();
    int Count();
    
    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T, int);
    
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
};

template <class T>
SinglyLL <T>::SinglyLL()
{
    first = NULL;
    iCount = 0;
}

template <class T>
void SinglyLL<T>::Display()
{
    cout<<"Elements of Singly Linear Linked list are : "<<"\n";

    NodeS<T> * temp = first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |-> ";
        temp = temp -> next;
    }
    cout<<"NULL"<<"\n";
}

template <class T>
int SinglyLL<T>::Count()
{
    return iCount;
}

template <class T>
void SinglyLL<T>::InsertFirst(T no)
{
    NodeS<T> * newn = new NodeS<T>;

    newn->data = no;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }
    iCount++;
}

template <class T>
void SinglyLL<T>::InsertLast(T no)
{
    NodeS<T> * newn = new NodeS<T>;

    newn->data = no;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        NodeS<T> *temp = first;

        while(temp->next != NULL)
        {
            temp= temp -> next;
        }
        temp->next = newn;
    }
    iCount++;
}

template <class T>
void SinglyLL<T>::DeleteFirst()
{
    if(first == NULL)
    {
        return;
    }
    else if(first -> next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        NodeS<T> *temp = first;

        first = first->next;
        delete temp;
    }
    iCount--;
}

template <class T>
void SinglyLL<T>::DeleteLast()
{
        if(first == NULL)
    {
        return;
    }
    else if(first -> next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        NodeS<T> *temp = first;

        while(temp ->next -> next!= NULL)
        {
            temp = temp -> next;
        }

        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}

template <class T>
void SinglyLL<T>::InsertAtPos(T no, int iPos)
{   
    int iCount = Count();

    if((iPos < 1) || (iPos > iCount+1))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(no);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(no);
    }
    else
    {
        NodeS<T> * temp = first;
        NodeS<T> * newn = new NodeS<T>;

        newn-> data = no;
        newn-> next = NULL;

        for(int iCnt = 1; iCnt < iPos -1; iCnt++)
        {
            temp = temp -> next;
        }

        newn->next = temp -> next;
        temp -> next = newn;
        
        iCount++;
    }
}

template <class T>
void SinglyLL<T>::DeleteAtPos(int iPos)
{
    int iCount = Count();

    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        NodeS<T> * temp1 = first;
        NodeS<T> * temp2 = NULL;

        for(int iCnt = 1; iCnt < iPos -1; iCnt++)
        {
            temp1 = temp1 -> next;
        }

        temp2 = temp1->next->next;
        delete temp1->next;
        temp1->next = temp2;
        
        iCount--;
    }
}

/////////////////////////////////////////////////////////////////

template <class T>                //generic
class SinglyCL
{
   public:
       struct NodeS<T> * first ;
       struct NodeS<T> * last ;
       int iCount ;

   SinglyCL();
   void Display();
   int Count();

   void InsertFirst(T);
   void InsertLast(T);
   void InsertAtPos(T,int);
   
   void DeleteFirst();
   void DeleteLast();
   void DeleteAtPos(int);    
};

template<class T>
void SinglyCL<T> :: Display()
{}

template<class T>
int SinglyCL<T> :: Count()
{
   return 0;
}
//////watch
template<class T>
void SinglyCL<T> :: InsertFirst(T no)
{
   NodeS<T> * newn = new NodeD<T>;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

   if((*first == NULL) && (*last == NULL))
    {
        *first = newn;
        *last = newn;
    }
    else
    {
        newn->next = *first;
        (*first)->prev = newn;

        *first = newn;
    }

    (*last) -> next = *first;
    (*first) -> prev = *last;
}

template<class T>
void SinglyCL<T> :: InsertLast(T no)
{
   NodeS<T> * newn = new NodeD<T>;

   NodeS<T> *temp = first;

    newn->data = no;                            // 2
    newn->next = NULL;

    if(*first == NULL)                           // 3
    {
        *first = newn;                           // 4
    }
    else
    {
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp->next = newn;
    }
}

template<class T>   
void SinglyCL<T> :: DeleteFirst()
{
   if((*first == NULL) && (*last == NULL))        // A
    {
        return;
    }
    else if(*first == *last)       // B
    {
        free(*first);
        *first = NULL;
        *last = NULL;
    }
    else        // C
    {
        *first = (*first) -> next;
        free((*last)->next);
        (*last)->next = *first;
    }
}

template<class T>
void SinglyCL<T> :: DeleteLast()
{
    
   NodeS<T> * temp = *first;

   if((*first == NULL) && (*last == NULL))        // A
    {
        return;
    }
    else if(*first == *last)       // B
    {
        free(*first);
        *first = NULL;
        *last = NULL;
    }
    else        // C
    {
        while(temp->next != *last)
        {
		    temp = temp->next;
        }

        free(*last);
        *last = temp;
        (*last)->next = *first;
    }
}

template<class T>
void SinglyCL<T> :: InsertAtPos(T no,int iPos)
{
    int iLength = 0;
    NodeS<T> *temp = *first;
    int iCnt = 0;

    NodeS<T> *newn = NULL;

    iLength = Count(*first, *last);

    if((iPos < 1) || (iPos > iLength + 1))
    {
        printf("Invalid position\n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(T no);
    }
    else if(iPos == iLength+1)
    {
        InsertLast(T no);
    }
    else
    {
        for(iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp -> next;
        }

        NodeS<T> *newn= new NodeS<T>;

        newn->data = no;
        newn->next = NULL;

        newn->next = temp->next;
        temp->next = newn;
    }
}


template<class T>
void SinglyCL<T> :: DeleteAtPos(int iPos)
{
   int iLength = 0;
    NodeS<T> *temp = *first;
    int iCnt = 0;

    NodeS<T> *tempX = NULL;

    iLength = Count(*first, *last);

    if((iPos < 1) || (iPos > iLength))
    {
        printf("Invalid position\n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(T no);
    }
    else if(iPos == iLength)
    {
        DeleteLast(T no);
    }
    else
    {
        for(iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp -> next;
        }

        tempX = temp->next;

        temp->next = temp->next->next;
        free(tempX);
    }
}

/////////////////////////////////////////////////////////////
template <class T>                //generic
class DoublyLL
{
    public:
       struct NodeS<T> * first ;
       int iCount ;

   DoublyLL();
   void Display();
   int Count();

   void InsertFirst(T);
   void InsertLast(T);
   void InsertAtPos(T,int);
   
   void DeleteFirst();
   void DeleteLast();
   void DeleteAtPos(int);    
};

template<class T>
void DoublyLL<T> :: Display()
{}

template<class T>
int DoublyLL<T> :: Count()
{
   return 0;
}

template<class T>
void DoublyLL<T> :: InsertFirst(T no)
{}

template<class T>
void DoublyLL<T> :: InsertLast(T no)
{}

template<class T>
void DoublyLL<T> :: InsertAtPos(T no,int iPos)
{}

template<class T>   
void DoublyLL<T> :: DeleteFirst()
{}

template<class T>
void DoublyLL<T> :: DeleteLast()
{}

template<class T>
void DoublyLL<T> :: DeleteAtPos(int iPos)
{}

/////////////////////////////////////////////////
template <class T>                //generic
class DoublyCL
{
    public:
       struct NodeS<T> * first ;
       int iCount ;

   DoublyCL();
   void Display();
   int Count();

   void InsertFirst(T);
   void InsertLast(T);
   void InsertAtPos(T,int);
   
   void DeleteFirst();
   void DeleteLast();
   void DeleteAtPos(int);    
};

template<class T>
void DoublyCL<T> :: Display()
{}

template<class T>
int DoublyCL<T> :: Count()
{
   return 0;
}

template<class T>
void DoublyCL<T> :: InsertFirst(T no)
{}

template<class T>
void DoublyCL<T> :: InsertLast(T no)
{}

template<class T>
void DoublyCL<T> :: InsertAtPos(T no,int iPos)
{}

template<class T>   
void DoublyCL<T> :: DeleteFirst()
{}

template<class T>
void DoublyCL<T> :: DeleteLast()
{}

template<class T>
void DoublyCL<T> :: DeleteAtPos(int iPos)
{}

///////////////////////////////////////////////////////////

int main()
{
  
  SinglyLL <int>obj1;

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);

    obj1.InsertLast(101);
    obj1.InsertLast(111);

    obj1.InsertAtPos(55,4);
    obj1.Display();
    cout<<"Number of elements are : "<<obj1.Count()<<"\n";

    obj1.DeleteAtPos(4);
    obj1.Display();
    cout<<"Number of elements are : "<<obj1.Count()<<"\n";

    obj1.DeleteFirst();
    obj1.DeleteLast();

    obj1.Display();
    cout<<"Number of elements are : "<<obj1.Count()<<"\n";

    SinglyLL <char>obj2;

    obj2.InsertFirst('C');
    obj2.InsertFirst('B');
    obj2.InsertFirst('A');

    obj2.InsertLast('D');
    obj2.InsertLast('E');

    obj2.Display();
    cout<<"Number of elements are : "<<obj2.Count()<<"\n";


    SinglyLL <double>obj3;

    obj3.InsertFirst(90.90);
    obj3.InsertFirst(80.80);
    obj3.InsertFirst(70.70);

    obj3.InsertLast(60.60);
    obj3.InsertLast(50.50);

    obj3.Display();
    cout<<"Number of elements are : "<<obj3.Count()<<"\n";

    return 0;
}