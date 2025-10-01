import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//	 Class Name :       program799.java
//	 Description :	    Used to accept string from user and arrange it in numeric order       
//   Author :           Sneha Mohane
//   Date :             08/09/2025                 
//
////////////////////////////////////////////////////////////////////////////////////////////

// Input : i love programming in python
//output : i in love python programming

class program799       
{
    public static void main(String[] A) 
    {
        Scanner sobj = new Scanner(System.in);

        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+", " ");
        
        System.out.println(str);
      
    }
}