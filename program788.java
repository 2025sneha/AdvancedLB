import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//	 Class Name :       program788.java
//	 Description :	    Used to accept number from user count number of ON bits of that number                      
//   Author :           Sneha Mohane
//   Date :             08/09/2025                 
//
////////////////////////////////////////////////////////////////////////////////////////////

class program788
{
    public static void main(String[] A) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int No = sobj.nextInt();

        int Digit = 0, iCount = 0;

        while(No != 0)
        {
            Digit = No % 2;
            if(Digit == 1)
            {
                iCount++;
            }
            No = No / 2;
        }

        System.out.println("Number of ON bits are : "+iCount);
    }
}