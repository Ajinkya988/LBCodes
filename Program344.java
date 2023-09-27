//Aporoach 3
import java.util.*;
//344<->345
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

class Program344
{
   public static void main(String Arg[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter number of elements :");
      int iSize = sobj.nextInt() ;

      ArrayX aobj = new ArrayX(iSize);
      aobj.Accept();
      aobj.Display();
     
      sobj.close() ;
   }

}