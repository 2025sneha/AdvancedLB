//////////////////////////////////////////////////////////////////////////
//
//  Header file inclusion
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    File name :       program806.c
//    Description :     Used to accept data from user and encrypt the data and return the decrypted data
//    Author :          Sneha Mohane
//    Date :            12/09/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

void Encrypt(
                char *str, 
                char key
            )
{
    while (*str != '\0')
    {
        *str = *str ^ key;
        str++;
    }
}

void Decrypt(
                char *str, 
                char key
            )
{
    while (*str != '\0')
    {
        *str = *str ^ key;
        str++;
    }
}

//////////////////////////////////////////////////////////////////////////////////////
//
//   Entry point function (main)
//
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50] = {'\0'};
    int i = 0;

    printf("Enter the data : \n");
    scanf("%[^'\n']s",Arr);

    printf("Original data in ASCII : \n");
    while(Arr[i] != '\0')
    {
        printf("%d\t",Arr[i]);
        i++;
    }

    Encrypt(Arr,'a');

    printf("\nEncypted data in ASCII : \n");
    i = 0;
    while(Arr[i] != '\0')
    {
        printf("%d\t",Arr[i]);
        i++;
    }    

    Decrypt(Arr,'a');

    printf("\nDecrypted data in ASCII : \n");
    i = 0;
    while(Arr[i] != '\0')
    {
        printf("%d\t",Arr[i]);
        i++;
    }    
    
    return 0;
}