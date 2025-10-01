import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//	 Class Name :       program797.java
//	 Description :	    Used to solve segregation problem statement            
//   Author :           Sneha Mohane
//   Date :             08/09/2025                 
//
////////////////////////////////////////////////////////////////////////////////////////////

// O(2N)
class program797               //segregation problem            
{
    public static void main(String[] A) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter number : ");

        //           0,1,2,3,4,5,6,7
        int Arr[] = {0,1,0,0,1,0,0,1};

        int iSum = 0;

        for(int no : Arr)
        {
            iSum += no;
        }

        int i = 0;
        for(i = 0; i < Arr.length - iSum; i++)
        {
            Arr[i] = 0;
        }
        for(i = Arr.length - iSum; i < Arr.length; i++)
        {
            Arr[i] = 1;
        }
        
        System.out.println("segregated array is : ");
        for(i = 0; i < Arr.length; i++)
        {
            System.out.println(Arr[i]+"\t");
        }
        System.out.println();
    }
}