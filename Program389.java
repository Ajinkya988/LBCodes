import java.util.*;
//IMP started
//incomplete//recheck
class Matrix
{
    public int Arr[][];

    public Matrix(int i, int j)
    {
       Arr = new int[i][j];
    }

    public void Accpet()
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter elements");
       for(int i = 0 ; i < Arr.length; i++ )
       {
          for(int j=0; j < Arr[i].length ; j++)
          {
             Arr[i][j] = sobj.nextInt();
          }
       }
    }

     public void Display()
     {
       System.out.println("Elements of matrix are");
       for(int i = 0 ; i < Arr.length; i++ )
       {
          for(int j=0; j < Arr[i].length ; j++)
          {
              System.out.println(Arr[i][j]+"\t");
          }
          System.out.println();
       }
     }
}

int Summation()
{
   int iSum = 0 ;

   for(int i = 0 ; i < Arr.length; i++ )
       {
          for(int j=0; j < Arr[i].length ; j++)
          {
              iSum = iSum + Arr[i][j];
          }
          System.out.println();
       }
       return iSum ;
}

class Program389
{
   public static void main(String Arg[])
   {
      Scanner sobj = new Scanner(System.in);
      int iRow = 0 , iCol = 0 ;

      System.out.println("Enter number of rows");
      iRow = sobj.nextInt();

      System.out.println("Enter number of rows");
      iCol = sobj.nextInt();
      
      Matrix mobj = new Matrix(iRow,iCol); //Matrix mobj = new Matrix(3,4);
      mobj.Accpet();
      mobj.Display();

      int iRet = mobj.Summation();
      System.out.println("Summation is: "+iRet);
   }
}

