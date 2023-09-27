import java.util.*;
//IMP started
//Accpet string and 
//

class Program370
{
   public static void main(String Arg[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter string : ");
      String str = sobj.nextLine();
      
      if(str.length() == 0)
      {
         System.out.println("Number of words are : 0");
         return ;
      }
      str = str.replaceAll("\\s+"," ");
      str = str.trim();

      int iFrequency =  0;
      for(int iCnt = 0 ; iCnt < str.length() ; iCnt++)
      {
         if(str.charAt(iCnt) == ' ')
         {
            iFrequency++ ;
         }
      }
      
       System.out.println("Number of words are : "+ (iFrequency+1));
     
   }     
}
/*
   a    97   0
   b    98   1
   c    99   2
   d    100  3
   */