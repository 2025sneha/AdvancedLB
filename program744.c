//////////////////////////////////////////////////////////////////////////
//
// Header file inclusion
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//   File name   :  program744.c
//   Description  :  Used to traverse linked list and nodes gets inserted in increasing 
//                   order display on screen
//   Author       :  Sneha mothabhau mohane
//   Date         :  30/08/2025
//
/////////////////////////////////////////////////////////////////////////////////////

typedef struct node
{
    int data;
    struct node *next;
    
}NODE, *PNODE, **PPNODE;


void InsertLast(
                    PPNODE first, 
                    int no
               )
{
 
    PNODE newn = NULL;
    PNODE temp = NULL;

   newn = (PNODE)malloc(sizeof(NODE));

   newn->data = no;
   newn->next = NULL;

   if(*first == NULL)
   {
      *first = newn;
   }
   else
   {
       temp = *first;

       while(temp -> next != NULL)
       {
          temp = temp -> next;
       }

       temp -> next = newn;
   }
}

void Display(
                PNODE first
            )
{
    while(first != NULL)
    {
        printf("| %d | ->",first-> data);
        first = first -> next;
    }

    printf("NULL\n");
}

void ReverseLinkedList(
                        PPNODE first
                      )
{
    PNODE Previous = NULL;
    PNODE Current = NULL;
    PNODE Next = NULL;

    if(*first == NULL)
    {
        return;

    }
    
    Current = *first;
 
    while(Current != NULL)                // N
    {
        Next = Current->next;
        Current->next = Previous;
        Previous = Current;
        Current = Next;

    }
    *first = Previous;

}

//////////////////////////////////////////////////////////////////////////
//
// Entry point function (main)
//
////////////////////////////////////////////////////////////////////////

int main()
{
    PNODE head = NULL;

    InsertLast(&head,11);
    InsertLast(&head,21);
    InsertLast(&head,51);
    InsertLast(&head,101);
    InsertLast(&head,111);
    
    Display(head);
    
    // Time complexity :  o(N)   Where N is the size of LL
    // Space Complexity:   o(1)   Where N is the size of LL

    ReverseLinkedList(&head);

    Display(head);

    return 0;
}