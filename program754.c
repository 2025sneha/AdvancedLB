//////////////////////////////////////////////////////////////////////////
//
//  Header file inclusion
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//   File name   :  program754.c
//   Description  :  Used to accept number from user and check its Disarium number or not
//   Author       :  Sneha mothabhau mohane
//   Date         :  30/08/2025
//
/////////////////////////////////////////////////////////////////////////////////////

// Input : 135
// output :  1^1 + 3^2 + 5^3
//            1 +   9  + 125
//             135
//           true

    
int Power(
            int A, 
            int B              // A^B
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

bool CheckDisarium(
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
        iCount--;
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
    scanf("%d\n",&iValue);

    bRet = CheckDisarium(iValue);                           //Digital Root

    if(bRet)
    {
        printf("%d is Disarium number\n ",iValue);
    }
    else 
    {
        printf("%d is not Disarium number\n ",iValue);
    }
    return 0;
}