import java.util.*;
//IMP started
//Incomplete   //
//time - 18.12 //july 9 imp

class Program380
{
   public static void main(String Arg[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter string : ");
      String str = sobj.nextLine();
      
      str = str.replaceAll("\\s+"," ");
      str = str.trim();

      String arr[] = str.split(" ");
      
      StringBuffer output = new StringBuffer();
      
      for(int iCnt= arr.length-1 ; iCnt >= 0 ; iCnt--)
      { 
         StringBuffer sb = new StringBuffer(arr[iCnt]);
         output = output.append(arr[iCnt].append(" "));
      }
      
      System.out.println(output);
   }     
}
