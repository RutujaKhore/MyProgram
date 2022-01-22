import java.util.*;

class LL
{
	public static void main(String str[])
	{
		LinkedList<Integer>obj = new LinkedList<Integer>();
		
		obj.add(10);
		obj.add(20);
		obj.add(30);
		
		System.out.println("Data from linked list");
		System.out.println(obj);
		obj.add(1,55);
		
		Iterator<Integer>iobj = obj.iterator();
		System.out.println("Data from linked list using iterator is");
		
		while(iobj.hasNext())
		{
			
			System.out.println(iobj.next());
		}
		obj = null;
	}
}
