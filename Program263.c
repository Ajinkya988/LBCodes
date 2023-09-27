#include<stdio.h>
#include<stdlib.h>

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

    Display(First);

    iRet = Count(First);
    printf("Number of node are : %d\n ",iRet);

     return 0 ;
}