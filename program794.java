import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//	 Class Name :       program794.java
//	 Description :	    Used to accept number from user count power of two                
//   Author :           Sneha Mohane
//   Date :             08/09/2025                 
//
////////////////////////////////////////////////////////////////////////////////////////////

class program794               // power of 2 or not 1,4,8,16,32....
{
    public static void main(String[] A) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int No = sobj.nextInt();


        if((No & (No - 1)) == 0)
        {
            System.out.println("Number is power of 2");
        }
        else 
        {
            System.out.println("Number is not power of 2");
        }
    }
}