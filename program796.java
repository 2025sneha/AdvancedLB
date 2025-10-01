import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//	 Class Name :       program796.java
//	 Description :	    Used to accept count non paired element of array             
//   Author :           Sneha Mohane
//   Date :             08/09/2025                 
//
////////////////////////////////////////////////////////////////////////////////////////////

class program796               
{
    public static void main(String[] A) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        
        int Arr[] = {7,2,9,7,3,8,2,9,3};

        int i = 0, j = 0, iFound = 0;

        //0,1,2,3,4,5,6,7,8 <- index
        //7,2,9,7,3,8,2,9,3


        for(i = 0; i < Arr.length; i++)
        {
            iFound = iFound ^ Arr[i];
        }  

        System.out.println("Non paired element is : "+iFound);
       
    }
}