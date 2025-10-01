//////////////////////////////////////////////////////////////////////////
//
//  Header file inclusion
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//   File name   :  program749.c
//   Description  :  Used to accept number from user and check its Strong number or not
//   Author       :  Sneha mothabhau mohane
//   Date         :  30/08/2025
//
/////////////////////////////////////////////////////////////////////////////////////

//Strong number or pitorson number or krishnamurti number


// Input : 145
// output : 5! + 4! + 1!
//          120 + 24 + 1
//          145
//          true

bool CheckStrong(
                    int iNo
                )
{
    int iDigit = 0;
    int  iTemp = iNo;
    int iSum = 0;

    int Factorial[10] = {1,1,2,6,24,120,720,5040,40320,362880};

    while(iNo != 0)
    {
        iDigit = iNo % 10;
      
        iSum = iSum + Factorial[iDigit];
        iNo = iNo / 10;
    }

    return(iSum == iTemp);
   
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

    printf("Enter number : ");
    scanf("%d\n",&iValue);

    bRet = CheckStrong(iValue);                           //Digital Root

    if(bRet)
    {
        printf("%d is strong number \n",iValue);
    }
    else 
    {
        printf("%d is not a strong number \n",iValue);
    }

    return 0;
}