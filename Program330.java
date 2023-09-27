//Approach 3
import java.util.*;

class Numbers
{
     public int Factorial(int iValue)   //No static req.
     {
          int iMult = 1 ;
          for(int iCnt = 1 ;iCnt <= iValue; iCnt++)
          {
               iMult = iMult * iCnt ;
          }
          return iMult ;
     }
}

class Program330
{
     public static void main(String arg[])
     {
          Scanner sobj = new Scanner(System.in);

          System.out.println("Enter number");
          int iNo = sobj.nextInt();

          Numbers nobj = new Numbers();

          int iRet = nobj.Factorial(iNo);

          System.out.println("Factorial is : "+iRet);
     }
}