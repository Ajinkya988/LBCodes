import java.util.*;
//Ano. Approach  
//Create the obj of stringBuffer bcos it is immutable
class StringX
{
    public String RemoveWhiteSpace(String str)
    {
      char Arr[] = str.toCharArray();  
      String output = ""; 

      int i = 0 ;
      for(int iCnt = 0 ;iCnt <Arr.length ; iCnt++)
      {
          if(Arr[iCnt] != ' ')  //
          {
             output = output + Arr[iCnt];
          }
      }
      return output;
    }  
}

class Program361
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