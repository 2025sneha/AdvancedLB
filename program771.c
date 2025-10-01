//////////////////////////////////////////////////////////////////////////
//
//  Header file inclusion
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

////////////////////////////////////////////////////////////////////////////////////////
//
//   File  name   :  program771.c
//   Description  :  Used to accept number from user and store it in array and 
//                   calculate maximum and minimum number
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

    iMax = INT_MIN;

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


void MaximumMinimum (
                        IPPTR Arr, 
                        int iRow, 
                        int iCol
                    )
{
    int i = 0, j = 0, iMax = 0, iMin = 0;

    iMax = INT_MIN;
    iMin = INT_MAX;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(Arr[i][j] > iMax)
            {
                iMax = Arr[i][j];
            }
            if(Arr[i][j] < iMin)
            {
                iMin = Arr[i][j];
            }
        }
    }
    printf("Maximum element is : %d\n",iMax);
    printf("Minimum element is : %d\n",iMin);
}

void MaximumRow (
                    IPPTR Arr, 
                    int iRow, 
                    int iCol
                )
{
    int i = 0, j = 0, iMax = 0;

    iMax = INT_MIN;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(Arr[i][j] > iMax)
            {
                iMax = Arr[i][j];
            }
        }
        printf("Maximum element from row number : %d is : %d\n",i,iMax);
        iMax = INT_MIN;
    }
 
}

int Minimum (
                IPPTR Arr, 
                int iRow, 
                int iCol
            )
{
    int i = 0, j = 0, iMin = 0;

    iMin = INT_MAX;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(Arr[i][j] < iMin)
            {
                iMin = Arr[i][j];
            }
        }
    }
    return iMin;
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
    
    MaximumMinimum(Arr,iRow,iCol);

    // Deallocate memory of matrix

    for(i = 0; i < iRow; i++)
    {
        free(Arr[i]);
    }

    free(Arr);

    return 0;
}