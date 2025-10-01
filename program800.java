import java.util.*;

// Input : i love programming in python
//output : i in love python programming

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//	 Class Name :       program798.java
//	 Description :	    Used to accept string from user and arrange it in numeric order          
//   Author :           Sneha Mohane
//   Date :             08/09/2025                 
//
////////////////////////////////////////////////////////////////////////////////////////////

class program800     
{
    public static void main(String[] A) 
    {
        Scanner sobj = new Scanner(System.in);

        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+", " ");
        
        String words[] = str.split(" ");

        Arrays.sort(words, Comparator.comparingInt(String::length));

        String finalstr = String.join(" ",words);

        System.out.println(finalstr);
    }
}

        
    