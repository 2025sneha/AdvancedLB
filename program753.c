//////////////////////////////////////////////////////////////////////////
//
//  Header file inclusion
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//   File name   :  program753.c
//   Description  :  Used to accept number from user and check its magic number or not
//   Author       :  Sneha mothabhau mohane
//   Date         :  30/08/2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : 19
// output :  1 + 9 -> 10  -> 1 + 0 -> 1
//           true


int CheckMagic(
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
    return (iSum == 1);
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

    bRet = CheckMagic(iValue);                           //Digital Root

    if(bRet)
    {
        printf("%d is magic number\n ",iValue);
    }
    else 
    {
        printf("%d is not magic number\n ",iValue);
    }
    return 0;
}