//////////////////////////////////////////////////////////////////////////
//
//  Header file inclusion
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//   File name   :  program752.c
//   Description  :  Used to accept number from user and check its nevan number or not
//   Author       :  Sneha mothabhau mohane
//   Date         :  30/08/2025
//
/////////////////////////////////////////////////////////////////////////////////////

// harshad number or nevan number
// Input : 18
// output :  18 -> 1 + 8 -> 9
//           (18 % 9) == 0
//           true


bool CheckNiven(
                    int iNo
               )
{
    int iSum = 0, iTemp = iNo, iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;

    }

    return (iTemp % iSum == 0);
}

//////////////////////////////////////////////////////////////////////////
//
// Entry point function (main)
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the end point of the range : ");
    scanf("%d\n",&iValue);

    bRet = CheckNiven(iValue);                           //Digital Root

    if(bRet)
    {
        printf("%d is Niven number\n ",iValue);
    }
    else 
    {
        printf("%d is not Niven number\n ",iValue);
    }
    return 0;
}