import java.util.*;
//incomp
class StringX
{
   public int CountSmall(String str)
   {
        char Arr[] = str.toCharArray() ;
        int iCount = 0 ;

        for(int iCnt = 0 ;iCnt < Arr.length; iCnt++)
        {
          if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
          {
             iCount++ ;
          }
        }
        return iCount ;
   }
   public int CountCapital(String str)
   {
        char Arr[] = str.toCharArray() ;
        int iCount = 0 ;

        for(int iCnt = 0 ;iCnt < Arr.length; iCnt++)
        {
          if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
          {
             iCount++ ;
          }
        }
        return iCount ;
   }
}
class Program354
{
   public static void main(String Arg[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter your name :");
      String name = sobj.nextLine() ;
 
      StringX obj = new StringX();
      int iRet = obj.CountSmall(name);
      System.out.println("Number of small elements are :" +iRet);

      int iRet = obj.CountCapital(name);
      System.out.println("Number of capital elements are :" +iRet);
   }
}