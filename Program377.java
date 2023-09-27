import java.util.*;
//IMP started
//remained something
class Program377
{
   public static void main(String Arg[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter string : ");
      String str = sobj.nextLine();
      
      StringBuffer sbobj = new StringBuffer(str);

      sbobj = sbobj.reverse();

      System.out.println(str);
   }
  
}
