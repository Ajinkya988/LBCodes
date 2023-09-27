import java.util.*;
//Ano. Approach
class StringX
{
    public String RemoveWhiteSpace(String str)
    {
      return str.replaceAll("\\s","");
    }  
}

class Program362
{
   public static void main(String Arg[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter your name :");
      String name = sobj.nextLine() ;
 
      StringX obj = new StringX();
      String sret = obj.RemoveWhiteSpace(name);

      System.out.println("Result is : "+sret);
   }
}