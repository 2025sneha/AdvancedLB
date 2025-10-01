//////////////////////////////////////////////////////////////////////////
//
//  Header file inclusion
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//   File  name   :  program756.c
//   Description  :  Used to accept number from user and allocate memory for it
//   Author       :  Sneha mothabhau mohane
//   Date         :  31/08/2025
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iRow = 0;
    int iCol = 0;

    printf("Enter number of rows : ");
    scanf("%d",&iRow);

    printf("Enter number of columns : ");
    scanf("%d",&iCol);

    int Arr[iRow][iCol];


    return 0;
}