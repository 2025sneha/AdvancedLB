import java.util.*;


/////////////////////////////////////////////////////////////////////////////////////////////////
//
//	 Class Name :       program792.java
//	 Description :	    Used to accept number from user count power of two                
//   Author :           Sneha Mohane
//   Date :             08/09/2025                 
//
////////////////////////////////////////////////////////////////////////////////////////////

class program792                // power of 2 or not 1,4,8,16,32....
{
    public static void main(String[] A) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int No = sobj.nextInt();

        int iCount = 0;

        while(No != 0)                       
        {
            No = No & (No - 1);
            iCount++;
        }

        if(iCount == 1)
        {
            System.out.println("Number is power of 2");
        }
        else 
        {
            System.out.println("Number is not power of 2");
        }
    }
}