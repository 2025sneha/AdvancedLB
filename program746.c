//Input : 9875
//output : 9+8+7+5 = 29    ->2 + 9 = 11  ->1 + 1 = 2 

// Input : 21
//output : 3

// Input : 7
//output : 7

//////////////////////////////////////////////////////////////////////////
//
//  Header file inclusion
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//   File name   :  program746.c
//   Description  :  Used to accept number from user and calculate its generic root
//   Author       :  Sneha mothabhau mohane
//   Date         :  30/08/2025
//
/////////////////////////////////////////////////////////////////////////////////////

int GenericRoot(
                    int iNo
               )
{
    int iDigit = 0;
    int iSum = 0;

    iSum = iNo;

    while (iSum > 9)
    {
        iNo =  iSum;
        iSum = 0;

        while (iNo != 0)
        {
           iDigit = iNo % 10;
           iSum = iSum + iDigit;
           iNo = iNo / 10;
        }

    }
    return iSum;
}
//////////////////////////////////////////////////////////////////////////
//
// Entry point function (main)
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d\n",&iValue);

    iRet = GenericRoot(iValue);                           //Digital Root

    printf("Generic Root of %d i %d\n",iValue,iRet);

    return 0;
}