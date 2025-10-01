//////////////////////////////////////////////////////////////////////////
//
//  Header file inclusion
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////
//
//   File  name   :  program765.c
//   Description  :  Used to accept number from user and allocate memory for two
//                   dimensional array return summation and maximum of it
//   Author       :  Sneha mothabhau mohane
//   Date         :  31/08/2025
//
///////////////////////////////////////////////////////////////////////////////////////

typedef int * IPTR;
typedef int ** IPPTR;

int Summation(
                IPPTR Arr, 
                int iRow, 
                int iCol
              )
{
    int i = 0, j = 0, iSum = 0;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            iSum = iSum + Arr[i][j];
        }
    }
    return iSum;
}

int Maximum (
                IPPTR Arr, 
                int iRow, 
                int iCol
            )
{
    int i = 0, j = 0, iMax = 0;

    iMax = Arr[0][0];

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(Arr[i][j] > iMax)
            {
                iMax = Arr[i][j];
            }
        }
    }
    return iMax;
}

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
    int iRow = 0, iCol = 0, i = 0, j = 0, iRet = 0;
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
    
    iRet = Maximum(Arr,iRow,iCol);

    printf("Maximum is : %d\n",iRet);

    // Deallocate memory of matrix

    for(i = 0; i < iRow; i++)
    {
        free(Arr[i]);
    }

    free(Arr);

    return 0;
}