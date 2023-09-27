//Important
//Generic Root
import java.util.*;
//Incomplete
class Digits
{
     boolean CheckArmstrong(int iNo)
     {
          int iTemp = iNo ;

          //Count number of digits
          int iCount = 0 ;
          while(iTemp != 0)
          {
               iCount++ ;
               iTemp = iTemp / 10 ;
          }

          iTemp = iNo ;
          
          int iSum = 0 ;
          int iPower = 1 ;
          int iCnt = 0 ;
          int iDigit=0 ;

          while(iNo != 0)
          {
              iDigit = iNo % 10 ;

              //Logic to Calculate
              for(iCnt = 1; iCnt <= iCount; iCnt++)
              {
               iPower = iSum + iPower ; 
              }

              iSum = iSum + iPower ;
              iPower = 1 ;
              iNo = iNo /10 ;
          }

          if(iSum == iTemp)
          {
               return true ;
          }
          else
          {
               return false ;
          }
     }
}

class Program341
{
     public static void main(String arg[])
     {
          Scanner sobj = new Scanner(System.in);

          System.out.println("Enter number");
          int iNo = sobj.nextInt();

          Digits dobj = new Digits();
          boolean bRet = dobj.CheckArmstrong(iNo);

          if(bRet == true)
          {
               System.out.println("Number is Armstrong");
          }
          else
          {
               System.out.println("Number is not Armstrong");
          }
     }
}

/*
    Input = 371
    3^3 + 7^3 + 1^3
    27 + 343 + 1
    371
*/
