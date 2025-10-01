//////////////////////////////////////////////////////////////////////////
//
//  Header file inclusion
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//   File name   :  program750.c
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

void CheckStrongRange(
                        int iEnd
                     )
{
    int i = 0;

    for(i = 1; i <= iEnd; i++)
    {
        if(CheckStrong(i))
        {
            printf("%d\n",i);
        }
    }

}


//////////////////////////////////////////////////////////////////////////
//
// Entry point function (main)
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    
    printf("Enter the end point of the range : ");
    scanf("%d\n",&iValue);

    CheckStrongRange(iValue);                           //Digital Root

    return 0;
}