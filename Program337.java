//Accpet number and count number of digits
import java.util.*;

class Digits
{
     int CountDigits(int iValue)
     {
          int iCount= 0 ;

         while(iValue != 0)
         {                 //Updated
             iCount++ ;
             iValue = iValue / 10 ;
         }
         return iCount ;
     } 
}

class Program337
{
     public static void main(String arg[])
     {
          Scanner sobj = new Scanner(System.in);

          System.out.println("Enter number");
          int iNo = sobj.nextInt();

          Digits dobj = new Digits();
          int iRet = dobj.CountDigits(iNo);
          System.out.println("Number of digits are : "+iRet);
     }
}