import java.util.*;
//Problems on numbers   // Accept number nd return factorial
class Program328
{
     public static void main(String arg[])
     {
          Scanner sobj = new Scanner(System.in);

          System.out.println("Enter first number");
          int iNo = sobj.nextInt();

          int iMult = 1 ;
          for(int iCnt = 1 ;iCnt <= iNo; iCnt++)
          {
               iMult = iMult * iCnt ;
          }

          System.out.println("Factorial is : "+iMult);
     }
}