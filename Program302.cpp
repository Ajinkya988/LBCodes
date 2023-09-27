#include<iostream>
using namespace std ;
//Incomplete  //Delete functions remained
//struct - data
//class - data + functionalities
typedef struct node
{
   int data ;
   struct node *next ;
}NODE ,*PNODE, *PPNODE;

class SinglyLL
{
   private : 
       PNODE First ;  //Characteristics
       int iCount ;   //Characteristics

   public :     
       SinglyLL() ;   //Constructor //Declare only

       void InsertFirst(int no);
       void InsertLast(int no);
       void InsertAtPos(int no, int iPos);

       void DeleteFirst();
       void DeleteLast();
       void DeleteAtPos(int iPos);

       void Display();
       int Count();

};

//Implementations of all behaviours
/*
  Return_Value Class_Name :: Function_Name (Parameter_List)
  {
    Function_Bode ;
  }
*/
void SinglyLL:: InsertFirst(int no)
{
  PNODE newn = NULL ;
  
  newn = new NODE ; //newn = (PNODE)malloc(sizeof(NODE));

  newn->data = no ;
  newn->next = NULL ;

  if(First == NULL)  //LL is empty
  {
    First = newn;
  }
  else
  {
    newn->next = First ;
    First = newn ;
  }
  iCount++ ;        //Interview
}
void SinglyLL:: InsertLast(int no)
{
  PNODE newn = NULL ;
  
  newn = new NODE ; //newn = (PNODE)malloc(sizeof(NODE));

  newn->data = no ;
  newn->next = NULL ;

  if(First == NULL)  //LL is empty
  {
    First = newn;
  }
  else
  {
    PNODE temp = First ;

    while(temp->next != NULL)
    {
      temp = temp -> next ;
    }
    temp->next = newn ;
  }
  iCount++ ;        //Interview
}

void SinglyLL:: DeleteFirst()
{
  if(First == NULL)     //Empty LL
  {
      return ;
  }
  else if(First->next == NULL)  //Single node in LL
  {
     delete First ; //free(first);
     First = NULL ;
  }
  else          //More than one node in LL
  {
     PNODE temp = First ;

     First = First -> next ;
     delete temp ;
  }
  iCount-- ;
}
void SinglyLL:: DeleteLast()
{
  if(First == NULL)     //Empty LL
  {
      return ;
  }
  else if(First->next->next == NULL)  //Single node in LL
  {
     delete First ; //free(first);
     First = NULL ;
  }
  else          //More than one node in LL
  {
     PNODE temp = First ;

     while(First -> next -> next != NULL)
     {
         temp = temp -> next ;
     }

     delete temp->next ;
     temp->next = NULL ;
  }
  iCount-- ;
}

void SinglyLL:: Display()
{
  PNODE temp = First ;

  cout<<"Elements of Linked List are : "<<"\n";

  while(temp != NULL)
  {
    cout<<"| "<<temp->data<<" |->" ;
    temp =temp -> next ;  
  }
  cout<<" NULL\n";
}
int SinglyLL::Count()
{
  return iCount ;
}

SinglyLL::SinglyLL()
{
  cout<<"Inside Constructor\n";
  First = NULL ;
  iCount = 0 ;
}

void SinglyLL:: InsertAtPos(int no, int iPos)
{
   int iCnt = 0 ;
   if ((iPos < 1) || (iPos > iCount+1))
   {
      cout <<"Invalid position\n";
      return ;
   }

   if( iPos == 1)
   {
      InsertFirst(no);
   }
   else if(iPos == iCount+1)
   {
      InsertLast(no);
   }
   else
   {
      PNODE temp = First ;

      for(iCnt = 1 ; iCnt < iPos-1 ; iCnt++)
      {
        temp = temp -> next ;
      }

      PNODE newn = new NODE ;
      newn->data = no ;
      newn->next = NULL ;
      
      newn->next = temp-> next ; 
      temp->next = newn ;
      
      iCount++ ;
   }
}
void SinglyLL:: DeleteAtPos(int iPos)
{
  int iCnt = 0 ;
   if ((iPos < 1) || (iPos > iCount))
   {
      cout <<"Invalid position\n";
      return ;
   }

   if( iPos == 1)
   {
      DeleteFirst();
   }
   else if(iPos == iCount)
   {
      DeleteLast();
   }
   else
   {
      PNODE temp = First;
      PNODE tempX = NULL ;
      
      for(iCnt = 1 ; iCnt <= iPos ; iCnt++)
      {
        temp = temp -> next ;
      }

      tempX = temp -> next ;
      temp -> next = temp ->next->next ;

      delete tempX ;
      
      iCount-- ;
   }
}

int main()
{
  int iRet= 0 ;
  SinglyLL obj1;

  obj1.InsertFirst(51);
  obj1.InsertFirst(21);
  obj1.InsertFirst(11);
  obj1.InsertLast(101);
  obj1.InsertLast(111);

  obj1.InsertAtPos(55,4);
  obj1.Display();
  obj1.DeleteAtPos(4);
  
  obj1.Display();
  iRet = obj1.Count();

  cout<<"Number of elements are : "<<iRet<<"\n";

  obj1.DeleteFirst();
  obj1.DeleteLast();
 
  obj1.Display();
  iRet = obj1.Count();



  return 0 ;
}