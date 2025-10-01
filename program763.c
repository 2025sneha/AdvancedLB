//////////////////////////////////////////////////////////////////////////
//
//  Header file inclusion
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////
//
//   File  name   :  program763.c
//   Description  :  Used to accept number from user and allocate memory for two
//                   dimensional array using dynamic memory allocation display on screen
//   Author       :  Sneha mothabhau mohane
//   Date         :  31/08/2025
//
///////////////////////////////////////////////////////////////////////////////////////

typedef int * IPTR;
typedef int ** IPPTR;

void Accept(
                IPPTR Arr, 
                int iRow, 
                int iCol
           )
{
    int i = 0, j = 0;

    printf("Enter the elements : \n");
    for(i = 0; i < iRow; i++)
    {
        for( j = 0; j < iCol; j++)
        {
            scanf("%d",&Arr[i][j]);
        }
    }
}

void Display( 
                IPPTR Arr,
                int iRow, 
                int iCol
            )
{
    int i = 0, j = 0;

    printf("Elements of the matrix are : \n");
    for(i = 0; i < iRow; i++)
    {
        for( j = 0; j < iCol; j++)
        {
            printf("%d\t",Arr[i][j]);
        }
        printf("\n");
    }

}

//////////////////////////////////////////////////////////////////////////
//
// Entry point function (main)
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iRow = 0, iCol = 0, i = 0, j = 0;
    IPPTR Arr = NULL;

    printf("Enter number of rows : ");
    scanf("%d",&iRow);

    printf("Enter number of columns : ");
    scanf("%d",&iCol);

    Arr = (IPPTR)malloc(sizeof(IPTR)*iRow);

    for(i = 0; i < iRow; i++)
    {
        Arr[i] = (IPTR)malloc(sizeof(int)*iCol);
    }

    Accept(Arr,iRow, iCol);

    Display(Arr, iRow, iCol);
    
    // Deallocate memory of matrix

    for(i = 0; i < iRow; i++)
    {
        free(Arr[i]);
    }

    free(Arr);

    return 0;
}