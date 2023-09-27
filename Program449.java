import java.util.*;
//DoublyLL in java
class Node
{
   public int data ;
   public Node next ;      //self ref.

   public Node(int no)    //node cha class cha constructor
   {
      this.data = no;
      this.next = null;
      this.prev = null;
   }
}

class DoublyLL 

{
   public Node first ;
   public int iCount ;

   public DoublyLL()
   {
      this.first = null;
      this.iCount = 0;
   }

   public void Display()
   {
      System.out.println("Elements of LL are : ");

      Node temp = first ;

      while(temp != null)
      {
         System.out.print("| "+temp.data+" |-> ");
         temp = temp.next ;
      }
      System.out.println("null");
   }

   public int Count()
   {
      return this.iCount;
   }

   public void InsertFirst(int no)
   {
      // PNODE newn = (PNODE)malloc(sizeof(NODE));   C
      // PNODE newn = new NODE;                      C++
      Node newn = new Node(no);                    //Java  

      if(first == null)
      {
         first = newn ;
      }
      else
      {
         newn.next = first;
         first = newn;
      }
      iCount++;
   }

   public void InsertLast(int no)
   {
      Node newn = new Node(no);                    //Java  

      if(first == null)
      {
         first = newn ;
      }
      else
      {
         NODE temp = first ;

         while(temp.next != null)
         {
            temp = temp.next;
         }
         temp.next = newn ;
      }
      iCount++;
   }

   public void InsertAtPos(int no ,int iPos)
   {}

   public void DeleteFirst()
   {}

   public void DeleteLast()
   {}

   public void DeleteAtPos(int iPos)
   {}

}

class Program449
{
   public static void main(String arg[])
   {
      DoublyLL obj = new DoublyLL();
   }
}