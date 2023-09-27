#include<stdio.h>
#include<stdlib.h>
//Common file for Assignment Questions
//Summation of Digits
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

void SumDigits(PNODE Head)
{
    int iNo = 0 ;
    int iSum = 0 ;
    int iDigit = 0 ;

    while(Head != NULL)
    {
        iNo = Head -> data ;
        
        while(iNo != 0)
        {
            iDigit = iNo % 10 ;
            iSum =iSum + iDigit ;
            iNo = iNo / 10 ;
        }
        printf("%d\n",iSum);

        iSum = 0 ;
        Head = Head -> next ;
    }
}
int main ()
{
     PNODE First = NULL ;
     int iRet = 0 ;
 
    InsertFirst(&First,111);
    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);

    SumDigits(First);

     return 0 ;
}