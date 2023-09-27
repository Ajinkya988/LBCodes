#include<iostream>
using namespace std ;
//Incomplete  //Delete functions remained
//Destructor  
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
};
/*SinglyLL::~SinglyLL()
{
  cout<<"Inside Destructor\n";
  PNODE
  
}
*/

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
  SinglyLL obj1 ;
  int iChoce = 0 ;
  int iValue = 0 ;
  int iPosition = 0 ;

  cout<<" Please enter your choice : \n\n" ;
 
  while(1)
  {
    cout<<"________________________________ \n" ;
    cout<<"Please enter your choice : \n\n" ;
    
    cout<<"Please enter your choice : \n" ;
    cout<<"1 : Insert node at first position\n";
    cout<<"2 : Insert node at Last position\n";
    cout<<"3 : Insert node at the given position\n";
    cout<<"4 : Delete node at first position\n";
    cout<<"5 : Delete node at Last position\n";
    cout<<"6 : Delete node at the given position\n";
    cout<<"7 : Display the elemets of Linked List\n";
    cout<<"8 : count number of nodes from linked list\n";
    cout<<"9 : Terminate the application\n";

    cin>>iChoce ;
    cout<<"________________________________ \n" ;

    switch (iChoce)
    {
      case 1:
         cout<<"enter the value that you want to insert : \n" ;
         cin>>iValue ;
         obj1.InsertFirst(iValue);
         break ;

      case 2:
         cout<<"enter the value that you want to insert : \n" ;
         cin>>iValue ;
         obj1.InsertLast(iValue);
         break ;

      case 3 :
         cout<<"enter the value that you want to insert : \n" ;
         cin>>iValue ;

         cout<<"Enter the Position\n";
         cin>>iPosition ;

         obj1.InsertAtPos(iValue,iPosition);
         break ; 

      case 4:
          obj1.DeleteFirst();
          break ;

      case 5:
          obj1.DeleteLast();
          break ;   

      case 6:
          cout<<"enter the position : \n";
          cin>>iPosition ;

          obj1.DeleteAtPos(iPosition);
          break ; 

      case 7 : 
          obj1.Display();
          break ; 

      case 8 : 
          cout<<"Number of elements are : "<<obj1.Count()<<"\n";
          break ;

      case 9 : 
          cout<<"Thank you for using the application\n";
          return 0 ;   

      default:
          cout<<"Invalid choice\n";
          break;  
    } 
  }

  return 0 ;
}