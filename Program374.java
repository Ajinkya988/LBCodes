import java.util.*;
//IMP started
//
//not completed

class Program374
{
   public static void main(String Arg[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter string : ");
      String str = sobj.nextLine();
      
      str = str.replaceAll("\\s+"," ");
      str = str.trim();

      String arr[] = str.split(" ");

      System.out.println("Enter word : ");
      String Word = sobj.nextLine;

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
