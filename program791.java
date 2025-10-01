import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//	 Class Name :       program791.java
//	 Description :	    Used to accept number from user count number of once using branin algorithm                
//   Author :           Sneha Mohane
//   Date :             08/09/2025                 
//
////////////////////////////////////////////////////////////////////////////////////////////

class program791
{
    public static void main(String[] A) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int No = sobj.nextInt();

        int iCount = 0;

        while(No != 0)                       // B K algorithm
        {
            No = No & (No - 1);
            iCount++;
        }

        System.out.println("Number of ON bits are : "+iCount);
    }
}