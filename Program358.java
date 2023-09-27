import java.util.*;
//Incomplete
class StringX
{
    public String StrLower(String str)
    {
       //Step 1: Convert String to Array
       char Arr[] = str.toCharArray();

       //Step 2: Perform operations on array
       for(int iCnt = 0 ; iCnt < Arr.length; iCnt++)
       {
          if((Arr[iCnt] >= 'A') && (Arr[iCnt] < 'Z'))
          {
              Arr[iCnt] = (char)(Arr[iCnt] + 32) ;  //Explicit
          }
       }

       //Step 3: Convert Array to String
       String ret = new String(Arr); //Conv. of Arr to Str

       return ret ;
    } 

    public String StrUpper(String str)
    {
       //Step 1: Convert String to Array
       char Arr[] = str.toCharArray();

       //Step 2: Perform operations on array
       for(int iCnt = 0 ; iCnt < Arr.length; iCnt++)
       {
          if((Arr[iCnt] >= 'a') && (Arr[iCnt] < 'z'))
          {
              Arr[iCnt] = (char)(Arr[iCnt] - 32) ;  //Explicit ....
          }
       }

       //Step 3: Convert Array to String
       String ret = new String(Arr); //Conv. of Arr to Str

       return ret ;
    } 

    public String StrToggle(String str)
    {
       //Step 1: Convert String to Array
       char Arr[] = str.toCharArray();

       //Step 2: Perform operations on array
       for(int iCnt = 0 ; iCnt < Arr.length; iCnt++)
       {
          if((Arr[iCnt] >= 'A') && (Arr[iCnt] < 'Z'))
          {
              Arr[iCnt] = (char)(Arr[iCnt] + 32) ;  
          }
          else if((Arr[iCnt] >= 'a') && (Arr[iCnt] < 'z'))
          {
             Arr[iCnt] = (char)(Arr[iCnt] - 32) ;
          }
       }

       //Step 3: Convert Array to String
       String ret = new String(Arr); //Conv. of Arr to Str

       return ret ;
    } 
}

class Program358
{
   public static void main(String Arg[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter your name :");
      String name = sobj.nextLine() ;
 
      StringX obj = new StringX();

      String sret = obj.StrLower(name);
      System.out.println("Converted string is : "+sret);

      String sret = obj.StrUpper(name);
      System.out.println("Converted string is : "+sret); 

      String sret = obj.StrToggle(name);
      System.out.println("Converted string is : "+sret); 
      
   }
}