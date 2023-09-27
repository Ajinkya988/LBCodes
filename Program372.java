import java.util.*;
//IMP started
//Accpet string and count words with another option
//using spit 
//

class Program372
{
   public static void main(String Arg[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter string : ");
      String str = sobj.nextLine();
      
      str = str.replaceAll("\\s+"," ");
      str = str.trim();

      String arr[] = str.split(" ");
      System.out.println("Number of words are : "+arr.length);
      
   }     
}
/*
   a    97   0
   b    98   1
   c    99   2
   d    100  3
   */