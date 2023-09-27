import java.util.*;
//IMP started
//Pattern matching
//Count particular word in giver string
//

class Program373
{
   public static void main(String Arg[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter string : ");
      String str = sobj.nextLine();
      
      str = str.replaceAll("\\s+"," ");
      str = str.trim();

      String arr[] = str.split(" ");

      int iFrequency = 0 ;
      for(int iCnt = 0 ; iCnt <arr.length; iCnt++)
      {
         if(arr[iCnt].equals("india"))
         {
            iFrequency++ ;
         }
      }

      System.out.println("freq of india word is  : "+iFrequency);
   }     
}

/*
   a    97   0
   b    98   1
   c    99   2
   d    100  3
   */