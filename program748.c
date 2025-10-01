//////////////////////////////////////////////////////////////////////////
//
//  Header file inclusion
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//   File name   :  program748.c
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
    int iSum = 0, iFact = 0, i = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        iFact = 1;
        for(i = 1; i <= iDigit; i++)
        {
            iFact = iFact * i;
        }
        iSum = iSum + iFact;
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