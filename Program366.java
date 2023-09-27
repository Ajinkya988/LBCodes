import java.util.*;
//IMP started
//Frequency of each letter
//entered string should be in small case
//drawback it travels whole array

class Program366
{
   public static void main(String Arg[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter string : ");
      String str = sobj.nextLine();

      str = str.toLowerCase();

      char Arr[] = str.toCharArray();

      int Freq[] = new int[26];
      int iCnt = 0 ;
      for(char ch : Arr )
      {
           Freq[ch - 'a']++ ;   
      }
     
      System.out.println("Frequency of each letter is : ");
      for(iCnt = 0 ;iCnt < Freq.length; iCnt++)
      {
         if(Freq[iCnt] != 0)       //Program365
         {
             System.out.println("Frequency of "+ (char)(iCnt+'a')  +  " is "  +  Freq[iCnt]);
         }
      }
    
   }
}
/*
   a    97   0
   b    98   1
   c    99   2
   d    100  3
   */

  //