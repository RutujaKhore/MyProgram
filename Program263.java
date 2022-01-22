


class Node
{
   public int data;
    public Node next;   
}
class SinglyLL
{
	private Node first;
	private int size;
	
	public SinglyLL()
	{
		this.first = null;
		this.size = 0;
	}
	public void InsertFirst(int no)
	{
		Node newn = null;
		newn = new Node();
		
		newn.data = no;
		newn.next = null;
		
		if(first==null)
		{
			first = newn;
		}
		else
		{
			newn.next=first;
			first=newn;
		}
		this.size++;
	}
	public void Display()
	{
		Node temp = first;
		System.out.println("Elements from linkedlist are:");
		
		while(temp!=null)
		{
			System.out.println("|"+temp.data+"|->");
			temp=temp.next;
		}
		
		System.out.println();
	}
	public int Count()
	{
		return this.size;
	}
	
	public void InsertLast(int no)
	{
		Node newn = null;
		newn = new Node();
		
		newn.data = no;
		newn.next = null;
		
		if(first==null)
		{
			first = newn;
		}
		else
		{
			Node temp = first;
			
			while(temp.next!=null)
			{
				temp = temp.next;
			}
			temp.next = newn;
		}
		this.size++;
	}
	public void DeleteFirst()
	{
		if(size == 0)
		{
			return;
		}
		if(size == 1)
		{
		    first = null;	
		}
		else
		{
			first = first.next;
		}
		this.size--;
	}
	
	public void DeleteLast()
	{
		if(size == 0)
		{
			return;
		}
		if(size == 1)
		{
		    first = null;	
		}
		else
		{
			Node temp = first;
			
			while(temp.next.next!=null)
			{
				temp = temp.next;
			}
			temp.next = null;
		}
		this.size--;
	}
}
class Program263
{
	public static void main(String str[])
	{
		SinglyLL obj = new SinglyLL();
		
		obj.InsertFirst(51);
		obj.InsertFirst(21);
		obj.InsertFirst(11);
		obj.InsertLast(101);
		obj.InsertLast(111);
		
	
		
		obj.Display();
		
		System.out.println("Number of elements are:"+obj.Count());
		
		obj.DeleteFirst();
		obj.DeleteLast();
		
		obj.Display();
		
		System.out.println("Number of elements are:"+obj.Count());
	}
}