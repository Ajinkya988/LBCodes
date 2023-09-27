#include<stdio.h>
#include<stdlib.h>
//INCOMPLETE
typedef struct Node
{
    int data ;
    struct Node *next ;
}NODE , *PNODE ,**PPNODE ;

//Allocate memory for new node
//2 : Initialize the node
//3: check whether LL is empty or not .
//4 : If Ll is empty store address of newnode in First
//5 : Otherwise store the address of newnode inside next pointer of old first node
//6 : Update First pointer with the address of new node

void InsertFirst(PPNODE Head , int no)
{
    PNODE newn = NULL ;
    newn = (PNODE)malloc(sizeof(NODE));        //1

    newn -> data = no ;                        //2
    newn -> next = NULL ;

    if(*Head == NULL)                          //3
    {
        *Head = newn;                          //4
    }
    else{
        newn->next = *Head ;                   //5
        *Head = newn ;                         //6
    } 
}

void InsertLast(PPNODE Head , int no)
{
    PNODE newn = NULL ;
    PNODE temp = *Head ;
    newn = (PNODE)malloc(sizeof(NODE));        //1

    newn -> data = no ;                        //2
    newn -> next = NULL ;

    if(*Head == NULL)                          //3
    {
        *Head = newn;                          //4
    }
    else
    {
       while(temp -> next != NULL)
       {
        temp = temp -> next ;
       }
    } 
}

void Display(PNODE Head)
{
    printf("Elements of LinkedList are : \n");

    while(Head != NULL)
    {
        printf("|%d| -> ", Head->data);
        Head = Head -> next ;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCount = 0 ;

    while(Head != NULL)
    {
        iCount++ ;
        Head = Head -> next ;
    }
    return iCount ;
}

void DeleteFirst(PPNODE Head)
{
    PNODE temp = *Head ;
    if(*Head == NULL )                 // LL is Empty
    {
        return ;
    }
    else if ((*Head) -> next == NULL)    // LL contains 1 node
    {
        free(*Head);
        *Head = NULL ;
    }
    else                             //LL Contains more than one node
    { 
        *Head = (*Head)-> next ;   //Memory Leak //Address gone
        free(temp);
    } 
}

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head ;
    if(*Head == NULL )                    // LL is Empty
    {
        return ;
    }
    else if ((*Head) -> next == NULL)    // LL contains 1 node
    {
        free(*Head);
        *Head = NULL ;
    }
    else
    { 
        while(temp ->next != NULL)       //TYPE 3
        {
            temp = temp -> next ;
        }
        free(temp -> next);
        temp->next = NULL ;              //IMP
    }  
}

void InsertAtPos(PPNODE Head ,int no , int iPos)
{
     int iLength = 0 ;
     iLength = Count(*Head);   //Calculate length of LL
     
     PNODE newn = NULL ;
     int iCnt = 0 ;
     PNODE temp = *Head;

     if((iPos < 1)|| (iPos > iLength+1))   //Invalid Position
     {
         printf("Invalid position\n");
         return ;
     }
     if(iPos == 1)
     {
         InsertFirst(Head,no);
     }
     else if (iPos == iLength+1)
     {
         InsertLast(Head,no);       
     }
     else
     {
        newn = (PNODE)malloc(sizeof(NODE));        //1

        newn -> data = no ;                        //2
        newn -> next = NULL ;

        for(iCnt = 1; iCnt < iPos -1 ;iCnt++)
        {
            temp = temp -> next;
        }

        //Sequence is Important
        newn->next = temp->next;
        temp->next = newn ;
     }
}

void DeleteAtPos(PPNODE Head , int iPos)
{
     int iLength = 0 ;
     iLength = Count(*Head);   //Calculate length of LL
     PNODE temp = *Head ;
     PNODE tempX = NULL ;

     int iCnt = 0;

     if((iPos < 1)|| (iPos > iLength))   //Invalid Position
     {
         printf("Invalid position\n");
         return ;
     }
     
     if(iPos == 1)
     {
         DeleteFirst(Head);
     }
     else if (iPos == iLength)
     {
         DeleteLast(Head);       
     }
     else
     {
        for(iCnt =1 ; iCnt < iPos -1 ; iCnt++)
        {
            temp = temp->next ;
        }
        tempX = temp->next ;
        //Sequence is important
        temp-> next= temp ->next->next ;
        free(tempX);
     }
     
}

int main ()
{
     PNODE First = NULL ;
     int iRet = 0 ;
     InsertFirst(&First,11);
     InsertFirst(&First,21);   
     InsertFirst(&First,51);
     InsertFirst(&First,101);

     Display(First);

     iRet = Count(First);
     printf("Number of nodes are : %d\n",iRet);

    InsertFirst(&First,10);
    InsertFirst(&First,20);

    
    
    InsertAtPos(&First, 25, 5);
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    DeleteAtPos(&First, 5);
    Display(First);
    iRet = Count(First);
    printf("Number of m nodes are : %d\n",iRet);

    
    DeleteFirst(&First);
    DeleteFirst(&First);

    Display(First);

    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    DeleteLast(&First);
    Display(First);

    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

     return 0 ;
}