//Important
//Generic Root
import java.util.*;

class Digits
{
     int GenericRoot(int iNo)
     {
          int iSum = 0 ;
          int iDigit = 0 ;

          while(iNo >= 10)
          {
             while(iNo != 0)
             {
                iDigit = iNo % 10;
                iSum = iSum + iDigit ;
                iNo = iNo / 10 ;
             } 
             if(iSum >= 10)
             {
               iNo = iSum ;
               iSum = 0 ;
             } 
             else
             {
               iNo = iSum ;
               break ;
             }
          }
        
         return iNo ;
     } 
}

class Program340
{
     public static void main(String arg[])
     {
          Scanner sobj = new Scanner(System.in);

          System.out.println("Enter number");
          int iNo = sobj.nextInt();

          Digits dobj = new Digits();
          int iRet = dobj.GenericRoot(iNo);
          System.out.println("Generic root is : "+iRet);
     }
}

/*
    
*/
