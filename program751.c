//////////////////////////////////////////////////////////////////////////
//
//  Header file inclusion
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//   File name   :  program751.c
//   Description  :  Used to accept number from user and check its Armstrong number or not
//   Author       :  Sneha mothabhau mohane
//   Date         :  30/08/2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : 153
// output : 1^3 + 5^3 + 3^3
//            1 + 125 + 27
//            153
//            true

// Input :  6743
// output :  6^4 + 7^4 + 4^4 + 3^3
    
int Power(
            int A, 
            int B                  // A^B
        )
{
    int Result = 1;
    int i = 0;

    for(i =1; i <= B; i++)
    {
        Result = Result * A;
    }

    return Result;
}

int CountDigits(
                    int iNo
               )
{
    int iCount = 0;

    while(iNo != 0)
    {
        iCount++;
        iNo = iNo / 10;
    }
    return iCount;
}

bool CheckArmstrong(
                        int iNo
                   )
{
    int iSum = 0, iTemp = iNo;
    int iCount = 0, iDigit = 0;

    iCount = CountDigits(iNo);

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + Power(iDigit, iCount);
        iNo = iNo / 10;
    }

    return(iTemp == iSum);
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
    scanf("%d",&iValue);

    bRet = CheckArmstrong(iValue);                           //Digital Root

    if(bRet)
    {
        printf("%d is Armstrong number\n ",iValue);
    }
    else 
    {
        printf("%d is not Armstrong number\n ",iValue);
    }
    return 0;
}