//////////////////////////////////////////////////////////////////////////
//
//  Header file inclusion
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    File name :       program803.c
//    Description :     Used to accept data from user and encrypt the data and return the decrypted data
//    Author :          Sneha Mohane
//    Date :            12/09/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

void Encrypt(
                char *str, 
                int key
            )
{
    while (*str != '\0')
    {
        *str = *str + key;
        str++;
    }
}

void Decrypt(
                char *str, 
                int key
            )
{
    while (*str != '\0')
    {
        *str = *str - key;
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

    printf("Enter the data : \n");
    scanf("%[^'\n']s",Arr);

    Encrypt(Arr,5);

    printf("Encrypted data : %s\n",Arr);
    
    Decrypt(Arr,5);

    printf("Decrypted data is : %s\n",Arr);
    
    return 0;
}