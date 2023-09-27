#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int no ;
    struct Node *next;
};

typedef struct Node NODE ;
typedef struct Node * PNODE ;
typedef struct Node ** PPNODE ;

void Display(PPNODE Head)
{}

int Count(PPNODE Head)
{
    return 0 ;
}

void InsertFirst(PPNODE Head, int No)
{}

void InsertLast(PPNODE Head, int No)
{}

void InsertAtPos(PPNODE Head, int No, int Pos)
{}

void DeleteFirst(PPNODE Head)
{}

void DeleteLast(PPNODE Head)
{}

void DeleteAtPos(PPNODE Head, int Pos)
{}

int main()
{
    PNODE First = NULL ;

    return 0 ;
}
