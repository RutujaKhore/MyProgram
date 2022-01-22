import java.util.*;

class SS
{
	public static void main(String str[])
	{
		Stack<String>sobj = new Stack<String>();
		
		sobj.push("India");
		sobj.push("US");
		sobj.push("Pakistan");
		sobj.push("China");
		
		System.out.println(sobj);
		
		//sobj.pop();
		//sobj.pop();
		System.out.println(sobj);
		
		Iterator<String>iobj = sobj.iterator();
		while(iobj.hasNEst())
		{
			System.out.println(iobj.next());
		}
		
		sobj = null;
	}
}
