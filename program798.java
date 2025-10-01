import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//	 Class Name :       program798.java
//	 Description :	    Used to solve segregation problem statement            
//   Author :           Sneha Mohane
//   Date :             08/09/2025                 
//
////////////////////////////////////////////////////////////////////////////////////////////

// O(N)
class program798         
{
    public static void main(String[] A) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter number : ");

        //           0,1,2,3,4,5,6,7
        int Arr[] = {0,1,0,0,1,0,0,1};

        int iStart = 0;
        int iEnd = Arr.length-1;

        while(iStart < iEnd)
        {
            if(Arr[iStart] == 0)
            {
                iStart++;
            }
            else if(Arr[iEnd] == 0)
            {
                iEnd--;
            }
            else 
            {
                Arr[iStart] = 0;
                Arr[iEnd] = 1;
                iStart++;
                iEnd--;
            }
        }
        
        System.out.println("segregated array is : ");
        for(int i = 0; i < Arr.length; i++)
        {
            System.out.println(Arr[i]+"\t");
        }
        System.out.println();
    }
}