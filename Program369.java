import java.util.*;
//IMP started
//Accpet string remove extra white spaces 
//

class Program369
{
   public static void main(String Arg[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter string : ");
      String str = sobj.nextLine();

      str = str.replaceAll("\\s+"," ");

      str = str.trim();

      System.out.println("Updated string is : "+str);

   }
      
}
/*
   a    97   0
   b    98   1
   c    99   2
   d    100  3
   */