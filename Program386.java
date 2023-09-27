import java.util.*;
//IMP started
//
//imp ANAGRAM
//freq for both string and compare them
//using sort
class Program386
{
   public static void main(String Arg[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter first string : ");
      String str1 = sobj.nextLine();

      System.out.println("Enter second string : ");
      String str2 = sobj.nextLine();

      if(str1.length() != str2.length())
      {
         System.out.println("Strings are not anagram");
      }

      str1 = str1.toLowerCase();
      str2 = str2.toLowerCase();

      char Arr[] = str1.toCharArray();
      char Brr[] = str2.toCharArray();

      Arrays.sort(Arr);
      Arrays.sort(Brr);

      if(Arrays.equals(Arr,Brr))
      {
         System.out.println("Strings are anagram");
      }
      else
      {
         System.out.println("Strings are not anagram");
      }
   }
}


//str1 = marvellous
//str2 = arvmwlosul