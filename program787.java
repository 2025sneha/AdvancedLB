import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////
//
//	 Class Name :       program787.java
//	 Description :	    Used to accept two number from user and swap their contents
//                      with out using temporary variable
//   Author :           Sneha Mohane
//   Date :             08/09/2025                 
//
////////////////////////////////////////////////////////////////////////////////////

class program787
{
    public static void main(String[] A) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number : ");
        int No1 = sobj.nextInt();

        System.out.println("Enter second number : ");
        int No2 = sobj.nextInt();

        No1 = No1 ^ No2;
        No2 = No2 ^ No1;
        No1 = No1 ^ No2;

        System.out.println("No1 after swapping : "+No1);
        System.out.println("No2 after swapping : "+No2);
    }
}