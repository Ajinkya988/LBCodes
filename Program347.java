//Aporoach 3
import java.util.*;
//Try to use this
class ArrayX
{
     public int Arr[];         //characteristic

     public ArrayX(int iSize)  //Constructor
     {
         Arr = new int[iSize]; //Actual memory allocation
     }
     
     public void Accept()
     {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements :");
        for(int iCnt = 0 ;iCnt < Arr.length; iCnt++)
        {
           Arr[iCnt] = sobj.nextInt();
        }
     }

     public void Display()
     {
         System.out.println("Elements of array are :");
         for(int iCnt = 0 ;iCnt < Arr.length; iCnt++)
         {
             System.out.print(Arr[iCnt]+"\t");
         }
         System.out.println();
     }     
}

class MyArray extends ArrayX
{// Required Business Logic
    public MyArray(int iSize)
    {
        super(iSize);
    }

    public int Summation()
     {
        int iSum = 0 ;
        for(int iCnt = 0 ;iCnt < Arr.length; iCnt++ )
        {
           iSum = iSum + Arr[iCnt];
        }
        return iSum ;
     }    
}

class Program347
{
   public static void main(String Arg[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter number of elements :");
      int iSize = sobj.nextInt() ;

      MyArray mobj = new MyArray(iSize);
      mobj.Accept();
      mobj.Display();
      System.out.println("Summation of all elements :"+mobj.Summation());  //Inline call
   }
}